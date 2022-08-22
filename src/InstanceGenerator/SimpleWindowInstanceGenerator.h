//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_SIMPLEWINDOWINSTANCEGENERATOR_H
#define DATAGENERATOR_SIMPLEWINDOWINSTANCEGENERATOR_H


#include "InstanceGenerator.h"

class SimpleWindowInstanceGenerator : public InstanceGenerator{
protected:
    virtual void addAttributesForWords(Instance* current, Sentence* sentence, int wordIndex) = 0;
    virtual void addAttributesForEmptyWords(Instance* current, string emptyWord) = 0;
    void addAttributes(Instance* current, Sentence* sentence, int wordIndex);
};


#endif //DATAGENERATOR_SIMPLEWINDOWINSTANCEGENERATOR_H
