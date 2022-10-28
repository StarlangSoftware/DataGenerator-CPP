//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_ROOTWORDINSTANCEGENERATOR_H
#define DATAGENERATOR_ROOTWORDINSTANCEGENERATOR_H


#include "InstanceGenerator.h"

class RootWordInstanceGenerator : public InstanceGenerator{
protected:
    virtual void addAttributesForPreviousWords(Instance* current, Sentence* sentence, int wordIndex) const = 0;
    virtual void addAttributesForEmptyWords(Instance* current, const string& emptyWord) const = 0;
public:
    Instance* generateInstanceFromSentence(Sentence* sentence, int wordIndex) const override;
};


#endif //DATAGENERATOR_ROOTWORDINSTANCEGENERATOR_H
