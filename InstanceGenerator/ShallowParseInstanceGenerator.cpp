//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include <AnnotatedWord.h>
#include "ShallowParseInstanceGenerator.h"

Instance *ShallowParseInstanceGenerator::generateInstanceFromSentence(Sentence *sentence, int wordIndex) {
    Instance* current;
    AnnotatedWord* word;
    word = (AnnotatedWord*) sentence->getWord(wordIndex);
    string classLabel = word->getShallowParse();
    if (classLabel.empty()){
        return nullptr;
    }
    current = new Instance(classLabel);
    addAttributes(current, sentence, wordIndex);
    return current;
}
