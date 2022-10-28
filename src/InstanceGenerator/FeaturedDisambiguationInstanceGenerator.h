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
    void addAttributesForPreviousWords(Instance* current, Sentence* sentence, int wordIndex) const override;
    void addAttributesForEmptyWords(Instance* current, const string& emptyWord) const override;
};


#endif //DATAGENERATOR_FEATUREDDISAMBIGUATIONINSTANCEGENERATOR_H
