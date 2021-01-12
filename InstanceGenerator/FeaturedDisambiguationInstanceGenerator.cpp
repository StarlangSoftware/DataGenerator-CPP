//
// Created by Olcay Taner YILDIZ on 12.01.2021.
//

#include <MorphologicalParse.h>
#include <AnnotatedWord.h>
#include "FeaturedDisambiguationInstanceGenerator.h"
#include "../Attribute/MainPosAttribute.h"
#include "../Attribute/IsCapitalAttribute.h"

/**
 * Constructor method. Gets input window size and sets the corresponding variable.
 * @param windowSize Number of previous (next) words to be considered in adding attributes.
 */
FeaturedDisambiguationInstanceGenerator::FeaturedDisambiguationInstanceGenerator(int windowSize) {
    this->windowSize = windowSize;
}

/**
 * Abstract function for adding attributes to the morphological disambiguation problem. Depending on your design
 * you can add as many attributes as possible. The number of attributes in this function should be equal to the
 * number of attributes in the function addAttributesForEmptyWords.
 * @param current Current classification instance
 * @param sentence Input sentence.
 * @param wordIndex The index of the word in the sentence.
 */
void FeaturedDisambiguationInstanceGenerator::addAttributesForPreviousWords(Instance* current, Sentence* sentence,
                                                                            int wordIndex) {
    MorphologicalParse* parse;
    AnnotatedWord* word;
    word = (AnnotatedWord*) sentence->getWord(wordIndex);
    parse = word->getParse();
    current->addAttribute(new MainPosAttribute(*parse));
    current->addAttribute(new IsCapitalAttribute(word->getName()));
}

/**
 * Abstract function for adding attributes for empty words to the morphological disambiguation problem. The number of
 * attributes in this function should be equal to the number of attributes in the function
 * addAttributesForPreviousWords.
 * @param current Current classification instance
 * @param emptyWord String form to place for empty words.
 */
void FeaturedDisambiguationInstanceGenerator::addAttributesForEmptyWords(Instance* current, string emptyWord) {
    current->addAttribute(new DiscreteAttribute("NULL"));
    current->addAttribute(new BinaryAttribute(false));
}
