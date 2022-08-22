//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_ROOTWORDINSTANCEGENERATOR_H
#define DATAGENERATOR_ROOTWORDINSTANCEGENERATOR_H


#include "InstanceGenerator.h"

class RootWordInstanceGenerator : public InstanceGenerator{
protected:
    virtual void addAttributesForPreviousWords(Instance* current, Sentence* sentence, int wordIndex) = 0;
    virtual void addAttributesForEmptyWords(Instance* current, string emptyWord) = 0;
public:
    Instance* generateInstanceFromSentence(Sentence* sentence, int wordIndex) override;
};


#endif //DATAGENERATOR_ROOTWORDINSTANCEGENERATOR_H
