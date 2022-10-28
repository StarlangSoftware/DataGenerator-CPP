//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_SHALLOWPARSEINSTANCEGENERATOR_H
#define DATAGENERATOR_SHALLOWPARSEINSTANCEGENERATOR_H


#include "SimpleWindowInstanceGenerator.h"

class ShallowParseInstanceGenerator : public SimpleWindowInstanceGenerator{
public:
    Instance* generateInstanceFromSentence(Sentence* sentence, int wordIndex) const override;
};


#endif //DATAGENERATOR_SHALLOWPARSEINSTANCEGENERATOR_H
