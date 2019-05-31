//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_ISREALATTRIBUTE_H
#define DATAGENERATOR_ISREALATTRIBUTE_H


#include <BinaryAttribute.h>
#include <MorphologicalParse.h>

class IsRealAttribute : public BinaryAttribute{
public:
    explicit IsRealAttribute (MorphologicalParse parse);
};


#endif //DATAGENERATOR_ISREALATTRIBUTE_H
