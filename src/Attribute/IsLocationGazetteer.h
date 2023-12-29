//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_ISLOCATIONGAZETTEER_H
#define DATAGENERATOR_ISLOCATIONGAZETTEER_H


#include "Attribute/BinaryAttribute.h"
#include <Gazetteer.h>

class IsLocationGazetteer : public BinaryAttribute{
public:
    static Gazetteer gazetteer;
    explicit IsLocationGazetteer(const string& surfaceForm);
};

Gazetteer IsLocationGazetteer::gazetteer = Gazetteer("LOCATION", "gazetteer-location.txt");

#endif //DATAGENERATOR_ISLOCATIONGAZETTEER_H
