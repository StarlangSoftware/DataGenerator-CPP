//
// Created by olcay on 2019-05-27.
//

#ifndef DATAGENERATOR_ISFRACTIONATTRIBUTE_H
#define DATAGENERATOR_ISFRACTIONATTRIBUTE_H


#include "Attribute/BinaryAttribute.h"
#include <MorphologicalParse.h>

class IsFractionAttribute : public BinaryAttribute{
public:
    explicit IsFractionAttribute(MorphologicalParse parse);
};


#endif //DATAGENERATOR_ISFRACTIONATTRIBUTE_H
