//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include <AnnotatedWord.h>
#include "NerInstanceGenerator.h"

/**
 * Generates a single classification instance of the NER problem for the given word of the given sentence. If the
 * word has not been labeled with NER tag yet, the method returns null.
 * @param sentence Input sentence.
 * @param wordIndex The index of the word in the sentence.
 * @return Classification instance.
 */
Instance *NerInstanceGenerator::generateInstanceFromSentence(Sentence *sentence, int wordIndex) const{
    Instance* current;
    AnnotatedWord* word;
    word = (AnnotatedWord*) sentence->getWord(wordIndex);
    string classLabel = getNamedEntityType(*(word->getNamedEntity()));
    current = new Instance(classLabel);
    addAttributes(current, sentence, wordIndex);
    return current;
}
