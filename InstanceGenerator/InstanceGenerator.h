//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_INSTANCEGENERATOR_H
#define DATAGENERATOR_INSTANCEGENERATOR_H


#include <Sentence.h>
#include <Instance.h>

class InstanceGenerator {
protected:
    int windowSize;
public:
    virtual Instance* generateInstanceFromSentence(Sentence* sentence, int wordIndex) = 0;
};


#endif //DATAGENERATOR_INSTANCEGENERATOR_H
