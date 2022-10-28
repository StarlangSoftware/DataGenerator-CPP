//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_MAINPOSATTRIBUTE_H
#define DATAGENERATOR_MAINPOSATTRIBUTE_H


#include "Attribute/DiscreteAttribute.h"
#include <MorphologicalParse.h>

class MainPosAttribute : public DiscreteAttribute{
public:
    explicit MainPosAttribute(const MorphologicalParse& parse);
};


#endif //DATAGENERATOR_MAINPOSATTRIBUTE_H
