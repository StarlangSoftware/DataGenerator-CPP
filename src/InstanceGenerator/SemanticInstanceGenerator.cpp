//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include <AnnotatedSentence.h>
#include "Instance/CompositeInstance.h"
#include "SemanticInstanceGenerator.h"

/**
 * Constructor for the semantic instance generator. Takes morphological analyzer and wordnet as input to set the
 * corresponding variables.
 * @param fsm Morphological analyzer to be used.
 * @param wordNet Wordnet to be used.
 */
SemanticInstanceGenerator::SemanticInstanceGenerator(FsmMorphologicalAnalyzer& fsm, WordNet& wordNet) {
    this->fsm = &fsm;
    this->wordNet = &wordNet;
}

/**
 * Generates a single classification instance of the WSD problem for the given word of the given sentence. If the
 * word has not been labeled with sense tag yet, the method returns null. In the WSD problem, the system also
 * generates and stores all possible sense labels for the current instance. In this case, a classification
 * instance will not have all labels in the dataset, but some subset of it.
 * @param sentence Input sentence.
 * @param wordIndex The index of the word in the sentence.
 * @return Classification instance.
 * @throws InstanceNotGenerated
 */
Instance *SemanticInstanceGenerator::generateInstanceFromSentence(Sentence *sentence, int wordIndex) const{
    vector<SynSet> possibleSynSets = ((AnnotatedSentence*) sentence)->constructSynSets(*wordNet, *fsm, wordIndex);
    auto* word = (AnnotatedWord*) sentence->getWord(wordIndex);
    string classLabel = word->getSemantic();
    if (classLabel.empty() || possibleSynSets.empty()){
        return nullptr;
    }
    auto* current = new CompositeInstance(classLabel);
    vector<string> possibleClassLabels;
    for (const SynSet& synSet : possibleSynSets) {
        possibleClassLabels.push_back(synSet.getId());
    }
    current->setPossibleClassLabels(possibleClassLabels);
    addAttributes(current, sentence, wordIndex);
    return current;
}
