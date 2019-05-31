//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_LASTIGCONTAINSPOSSESSIVEATTRIBUTE_H
#define DATAGENERATOR_LASTIGCONTAINSPOSSESSIVEATTRIBUTE_H


#include <BinaryAttribute.h>
#include <MorphologicalParse.h>

class LastIGContainsPossessiveAttribute : public BinaryAttribute{
public:
    explicit LastIGContainsPossessiveAttribute(MorphologicalParse parse);
};


#endif //DATAGENERATOR_LASTIGCONTAINSPOSSESSIVEATTRIBUTE_H
