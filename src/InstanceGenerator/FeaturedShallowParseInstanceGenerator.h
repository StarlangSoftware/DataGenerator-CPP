//
// Created by Olcay Taner YILDIZ on 12.01.2021.
//

#ifndef DATAGENERATOR_FEATUREDSHALLOWPARSEINSTANCEGENERATOR_H
#define DATAGENERATOR_FEATUREDSHALLOWPARSEINSTANCEGENERATOR_H


#include "ShallowParseInstanceGenerator.h"

class FeaturedShallowParseInstanceGenerator : public ShallowParseInstanceGenerator{
public:
    explicit FeaturedShallowParseInstanceGenerator(int windowSize);

protected:
    void addAttributesForWords(Instance* current, Sentence* sentence, int wordIndex) const override;
    void addAttributesForEmptyWords(Instance* current, const string& emptyWord) const override;
};


#endif //DATAGENERATOR_FEATUREDSHALLOWPARSEINSTANCEGENERATOR_H
