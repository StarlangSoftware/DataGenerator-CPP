//
// Created by olcay on 2019-05-27.
//

#ifndef DATAGENERATOR_ISCAPITALATTRIBUTE_H
#define DATAGENERATOR_ISCAPITALATTRIBUTE_H


#include "Attribute/BinaryAttribute.h"

class IsCapitalAttribute : public BinaryAttribute{
public:
    explicit IsCapitalAttribute(string surfaceForm);
private:
    bool isUpper(const string& surfaceForm);
};


#endif //DATAGENERATOR_ISCAPITALATTRIBUTE_H
