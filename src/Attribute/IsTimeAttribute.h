//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_ISTIMEATTRIBUTE_H
#define DATAGENERATOR_ISTIMEATTRIBUTE_H


#include "Attribute/BinaryAttribute.h"

class IsTimeAttribute : public BinaryAttribute{
public:
    explicit IsTimeAttribute(const string& surfaceForm);
};


#endif //DATAGENERATOR_ISTIMEATTRIBUTE_H
