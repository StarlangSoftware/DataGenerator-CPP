//
// Created by Olcay Taner YILDIZ on 12.01.2021.
//

#ifndef DATAGENERATOR_FEATUREDNERINSTANCEGENERATOR_H
#define DATAGENERATOR_FEATUREDNERINSTANCEGENERATOR_H


#include "NerInstanceGenerator.h"

class FeaturedNerInstanceGenerator : public NerInstanceGenerator{
public:
    explicit FeaturedNerInstanceGenerator(int windowSize);

protected:
    void addAttributesForWords(Instance* current, Sentence* sentence, int wordIndex);
    void addAttributesForEmptyWords(Instance* current, string emptyWord);
};


#endif //DATAGENERATOR_FEATUREDNERINSTANCEGENERATOR_H
