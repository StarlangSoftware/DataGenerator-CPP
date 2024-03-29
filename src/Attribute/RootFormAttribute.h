//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_ROOTFORMATTRIBUTE_H
#define DATAGENERATOR_ROOTFORMATTRIBUTE_H


#include "Attribute/DiscreteAttribute.h"
#include <MorphologicalParse.h>

class RootFormAttribute : public DiscreteAttribute{
public:
    explicit RootFormAttribute(const MorphologicalParse& parse);
};


#endif //DATAGENERATOR_ROOTFORMATTRIBUTE_H
