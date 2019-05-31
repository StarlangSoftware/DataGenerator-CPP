//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_PREDICATE_H
#define DATAGENERATOR_PREDICATE_H


#include <DiscreteAttribute.h>
#include <Sentence.h>

class Predicate : public DiscreteAttribute{
public:
    Predicate(Sentence* sentence, int index);
};


#endif //DATAGENERATOR_PREDICATE_H
