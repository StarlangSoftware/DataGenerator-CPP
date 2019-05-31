//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include <AnnotatedWord.h>
#include "NerInstanceGenerator.h"

Instance *NerInstanceGenerator::generateInstanceFromSentence(Sentence *sentence, int wordIndex) {
    Instance* current;
    AnnotatedWord* word;
    word = (AnnotatedWord*) sentence->getWord(wordIndex);
    string classLabel = getNamedEntityType(*(word->getNamedEntity()));
    current = new Instance(classLabel);
    addAttributes(current, sentence, wordIndex);
    return current;
}
