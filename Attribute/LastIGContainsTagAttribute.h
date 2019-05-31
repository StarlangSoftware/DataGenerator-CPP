//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_LASTIGCONTAINSTAGATTRIBUTE_H
#define DATAGENERATOR_LASTIGCONTAINSTAGATTRIBUTE_H


#include <BinaryAttribute.h>
#include <MorphologicalParse.h>
#include <MorphologicalTag.h>

class LastIGContainsTagAttribute : public BinaryAttribute{
public:
    LastIGContainsTagAttribute(MorphologicalParse parse, MorphologicalTag tag);
};


#endif //DATAGENERATOR_LASTIGCONTAINSTAGATTRIBUTE_H
