//
// Created by olcay on 2019-05-27.
//

#ifndef DATAGENERATOR_ISADJECTIVEATTRIBUTE_H
#define DATAGENERATOR_ISADJECTIVEATTRIBUTE_H

#include "Attribute/BinaryAttribute.h"
#include <MorphologicalParse.h>

class IsAdjectiveAttribute : public BinaryAttribute{
public:
    explicit IsAdjectiveAttribute(const MorphologicalParse& parse);
};


#endif //DATAGENERATOR_ISADJECTIVEATTRIBUTE_H
