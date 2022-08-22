//
// Created by olcay on 2019-05-27.
//

#ifndef DATAGENERATOR_CASEATTRIBUTE_H
#define DATAGENERATOR_CASEATTRIBUTE_H

#include <MorphologicalParse.h>
#include "Attribute/DiscreteAttribute.h"

class CaseAttribute : public DiscreteAttribute{
public:
    explicit CaseAttribute(MorphologicalParse parse);
};


#endif //DATAGENERATOR_CASEATTRIBUTE_H
