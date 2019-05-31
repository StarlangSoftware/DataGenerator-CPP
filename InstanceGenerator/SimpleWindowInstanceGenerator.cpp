//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "SimpleWindowInstanceGenerator.h"

void SimpleWindowInstanceGenerator::addAttributes(Instance *current, Sentence *sentence, int wordIndex) {
    for (int i = 0; i < windowSize; i++){
        if (wordIndex - windowSize + i >= 0){
            addAttributesForWords(current, sentence, wordIndex - windowSize + i);
        } else {
            addAttributesForEmptyWords(current, "<s>");
        }
    }
    addAttributesForWords(current, sentence, wordIndex);
    for (int i = 0; i < windowSize; i++){
        if (wordIndex + i + 1 < sentence->wordCount()){
            addAttributesForWords(current, sentence, wordIndex + i + 1);
        } else {
            addAttributesForEmptyWords(current, "</s>");
        }
    }
}
