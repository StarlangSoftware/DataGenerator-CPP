//
// Created by Olcay Taner YILDIZ on 12.01.2021.
//

#ifndef DATAGENERATOR_FEATUREDROOTWORDINSTANCEGENERATOR_H
#define DATAGENERATOR_FEATUREDROOTWORDINSTANCEGENERATOR_H


#include "RootWordInstanceGenerator.h"

class FeaturedRootWordInstanceGenerator : RootWordInstanceGenerator{
public:
    explicit FeaturedRootWordInstanceGenerator(int windowSize);

protected:
    void addAttributesForPreviousWords(Instance* current, Sentence* sentence, int wordIndex) const override;
    void addAttributesForEmptyWords(Instance* current, const string& emptyWord) const override;
};


#endif //DATAGENERATOR_FEATUREDROOTWORDINSTANCEGENERATOR_H
