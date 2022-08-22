//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_ISMONEYATTRIBUTE_H
#define DATAGENERATOR_ISMONEYATTRIBUTE_H


#include "Attribute/BinaryAttribute.h"

class IsMoneyAttribute : public BinaryAttribute{
public:
    explicit IsMoneyAttribute(string surfaceForm);
};


#endif //DATAGENERATOR_ISMONEYATTRIBUTE_H
