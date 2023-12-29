//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include <AnnotatedWord.h>
#include "ShallowParseInstanceGenerator.h"

/**
 * Generates a single classification instance of the Shallow Parse problem for the given word of the given sentence.
 * If the  word has not been labeled with shallow parse tag yet, the method returns null.
 * @param sentence Input sentence.
 * @param wordIndex The index of the word in the sentence.
 * @return Classification instance.
 */
Instance *ShallowParseInstanceGenerator::generateInstanceFromSentence(Sentence *sentence, int wordIndex) const{
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
