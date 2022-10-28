//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include <AnnotatedWord.h>
#include "DisambiguationInstanceGenerator.h"

/**
 * Generates a single classification instance of the morphological disambiguation problem for the given word of the
 * given sentence. If the word does not have a morphological parse, the method throws InstanceNotGenerated.
 * @param sentence Input sentence.
 * @param wordIndex The index of the word in the sentence.
 * @return Classification instance.
 */
Instance *DisambiguationInstanceGenerator::generateInstanceFromSentence(Sentence* sentence, int wordIndex) const{
    Instance* current;
    AnnotatedWord* word;
    word = (AnnotatedWord*) sentence->getWord(wordIndex);
    current = new Instance(word->getParse()->getTransitionList());
    for (int i = 0; i < windowSize; i++){
        if (wordIndex - windowSize + i >= 0){
            addAttributesForPreviousWords(current, sentence, wordIndex - windowSize + i);
        } else {
            addAttributesForEmptyWords(current, "<s>");
        }
    }
    addAttributesForPreviousWords(current, sentence, wordIndex);
    return current;
}
