//
// Created by Olcay Taner YILDIZ on 12.01.2021.
//

#ifndef DATAGENERATOR_FEATUREDDISAMBIGUATIONINSTANCEGENERATOR_H
#define DATAGENERATOR_FEATUREDDISAMBIGUATIONINSTANCEGENERATOR_H


#include "DisambiguationInstanceGenerator.h"

class FeaturedDisambiguationInstanceGenerator : public DisambiguationInstanceGenerator{
public:
    explicit FeaturedDisambiguationInstanceGenerator(int windowSize);
protected:
    void addAttributesForPreviousWords(Instance* current, Sentence* sentence, int wordIndex);
    void addAttributesForEmptyWords(Instance* current, string emptyWord);
};


#endif //DATAGENERATOR_FEATUREDDISAMBIGUATIONINSTANCEGENERATOR_H
