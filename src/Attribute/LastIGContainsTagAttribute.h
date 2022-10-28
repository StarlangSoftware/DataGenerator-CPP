//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_LASTIGCONTAINSTAGATTRIBUTE_H
#define DATAGENERATOR_LASTIGCONTAINSTAGATTRIBUTE_H


#include "Attribute/BinaryAttribute.h"
#include <MorphologicalParse.h>
#include <MorphologicalTag.h>

class LastIGContainsTagAttribute : public BinaryAttribute{
public:
    LastIGContainsTagAttribute(const MorphologicalParse& parse, MorphologicalTag tag);
};


#endif //DATAGENERATOR_LASTIGCONTAINSTAGATTRIBUTE_H
