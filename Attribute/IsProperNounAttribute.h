//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_ISPROPERNOUNATTRIBUTE_H
#define DATAGENERATOR_ISPROPERNOUNATTRIBUTE_H


#include <BinaryAttribute.h>
#include <MorphologicalParse.h>

class IsProperNounAttribute : public BinaryAttribute{
public:
    explicit IsProperNounAttribute(MorphologicalParse parse);
};


#endif //DATAGENERATOR_ISPROPERNOUNATTRIBUTE_H
