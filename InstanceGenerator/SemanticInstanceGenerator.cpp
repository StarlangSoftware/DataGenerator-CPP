//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include <AnnotatedSentence.h>
#include <CompositeInstance.h>
#include "SemanticInstanceGenerator.h"

SemanticInstanceGenerator::SemanticInstanceGenerator(FsmMorphologicalAnalyzer &fsm, WordNet &wordNet) {
    this->fsm = fsm;
    this->wordNet = wordNet;
}

Instance *SemanticInstanceGenerator::generateInstanceFromSentence(Sentence *sentence, int wordIndex) {
    vector<SynSet> possibleSynSets = ((AnnotatedSentence*) sentence)->constructSynSets(wordNet, fsm, wordIndex);
    auto* word = (AnnotatedWord*) sentence->getWord(wordIndex);
    string classLabel = word->getSemantic();
    if (classLabel.empty() || possibleSynSets.empty()){
        return nullptr;
    }
    CompositeInstance* current = new CompositeInstance(classLabel);
    vector<string> possibleClassLabels;
    for (SynSet synSet : possibleSynSets) {
        possibleClassLabels.push_back(synSet.getId());
    }
    current->setPossibleClassLabels(possibleClassLabels);
    addAttributes(current, sentence, wordIndex);
    return current;
}
