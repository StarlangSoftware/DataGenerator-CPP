//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include <AnnotatedWord.h>
#include "DisambiguationInstanceGenerator.h"

Instance *DisambiguationInstanceGenerator::generateInstanceFromSentence(Sentence* sentence, int wordIndex) {
    Instance* current;
    AnnotatedWord* word;
    word = (AnnotatedWord*) sentence->getWord(wordIndex);
    current = new Instance(word->getParse()->getTransitionList());
    for (int i = 1; i <= windowSize; i++){
        if (wordIndex - windowSize >= 0){
            addAttributesForPreviousWords(current, sentence, wordIndex - windowSize);
        } else {
            addAttributesForEmptyWords(current, "<s>");
        }
    }
    addAttributesForPreviousWords(current, sentence, wordIndex);
    return current;
}
