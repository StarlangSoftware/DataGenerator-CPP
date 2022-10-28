//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_ISORGANIZATIONATTRIBUTE_H
#define DATAGENERATOR_ISORGANIZATIONATTRIBUTE_H


#include "Attribute/BinaryAttribute.h"

class IsOrganizationAttribute : public BinaryAttribute{
public:
    explicit IsOrganizationAttribute(const string& surfaceForm);
};


#endif //DATAGENERATOR_ISORGANIZATIONATTRIBUTE_H
