//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_ROOTPOSATTRIBUTE_H
#define DATAGENERATOR_ROOTPOSATTRIBUTE_H


#include <DiscreteAttribute.h>
#include <MorphologicalParse.h>

class RootPosAttribute : public DiscreteAttribute{
public:
    explicit RootPosAttribute(MorphologicalParse parse);
};


#endif //DATAGENERATOR_ROOTPOSATTRIBUTE_H
