//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_ISPROPERNOUNATTRIBUTE_H
#define DATAGENERATOR_ISPROPERNOUNATTRIBUTE_H


#include "Attribute/BinaryAttribute.h"
#include <MorphologicalParse.h>

class IsProperNounAttribute : public BinaryAttribute{
public:
    explicit IsProperNounAttribute(const MorphologicalParse& parse);
};


#endif //DATAGENERATOR_ISPROPERNOUNATTRIBUTE_H
