//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_DISAMBIGUATIONINSTANCEGENERATOR_H
#define DATAGENERATOR_DISAMBIGUATIONINSTANCEGENERATOR_H


#include "InstanceGenerator.h"

class DisambiguationInstanceGenerator : public InstanceGenerator{
protected:
    virtual void addAttributesForPreviousWords(Instance* current, Sentence* sentence, int wordIndex) const = 0;
    virtual void addAttributesForEmptyWords(Instance* current, const string& emptyWord) const = 0;
public:
    Instance* generateInstanceFromSentence(Sentence* sentence, int wordIndex) const override;
};


#endif //DATAGENERATOR_DISAMBIGUATIONINSTANCEGENERATOR_H
