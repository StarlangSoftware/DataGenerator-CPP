//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_ISPERSONGAZETTEER_H
#define DATAGENERATOR_ISPERSONGAZETTEER_H


#include "Attribute/BinaryAttribute.h"
#include <Gazetteer.h>

class IsPersonGazetteer : public BinaryAttribute{
public:
    static Gazetteer gazetteer;
    explicit IsPersonGazetteer(string surfaceForm);
};

Gazetteer IsPersonGazetteer::gazetteer = Gazetteer("Person", "gazetteer-person.txt");


#endif //DATAGENERATOR_ISPERSONGAZETTEER_H
