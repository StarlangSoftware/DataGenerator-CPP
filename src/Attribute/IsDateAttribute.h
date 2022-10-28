//
// Created by olcay on 2019-05-27.
//

#ifndef DATAGENERATOR_ISDATEATTRIBUTE_H
#define DATAGENERATOR_ISDATEATTRIBUTE_H


#include "Attribute/BinaryAttribute.h"
#include <MorphologicalParse.h>

class IsDateAttribute : public BinaryAttribute {
public:
    explicit IsDateAttribute (const MorphologicalParse& parse);
};


#endif //DATAGENERATOR_ISDATEATTRIBUTE_H
