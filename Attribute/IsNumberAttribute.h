//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_ISNUMBERATTRIBUTE_H
#define DATAGENERATOR_ISNUMBERATTRIBUTE_H


#include <BinaryAttribute.h>
#include <MorphologicalParse.h>

class IsNumberAttribute : public BinaryAttribute{
public:
    explicit IsNumberAttribute(MorphologicalParse parse);
};


#endif //DATAGENERATOR_ISNUMBERATTRIBUTE_H
