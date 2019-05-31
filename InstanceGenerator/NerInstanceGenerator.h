//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_NERINSTANCEGENERATOR_H
#define DATAGENERATOR_NERINSTANCEGENERATOR_H


#include "SimpleWindowInstanceGenerator.h"

class NerInstanceGenerator : public SimpleWindowInstanceGenerator{
public:
    Instance* generateInstanceFromSentence(Sentence* sentence, int wordIndex) override;
};


#endif //DATAGENERATOR_NERINSTANCEGENERATOR_H
