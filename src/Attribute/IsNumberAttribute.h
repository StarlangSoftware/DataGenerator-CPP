//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_ISNUMBERATTRIBUTE_H
#define DATAGENERATOR_ISNUMBERATTRIBUTE_H


#include "Attribute/BinaryAttribute.h"
#include <MorphologicalParse.h>

class IsNumberAttribute : public BinaryAttribute{
public:
    explicit IsNumberAttribute(const MorphologicalParse& parse);
};


#endif //DATAGENERATOR_ISNUMBERATTRIBUTE_H
