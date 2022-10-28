//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_ISORGANIZATIONGAZETTEER_H
#define DATAGENERATOR_ISORGANIZATIONGAZETTEER_H


#include "Attribute/BinaryAttribute.h"
#include <Gazetteer.h>

class IsOrganizationGazetteer : public BinaryAttribute{
public:
    static Gazetteer gazetteer;
    explicit IsOrganizationGazetteer(const string& surfaceForm);
};

Gazetteer IsOrganizationGazetteer::gazetteer = Gazetteer("ORGANIZATION", "gazetteer-organization.txt");

#endif //DATAGENERATOR_ISORGANIZATIONGAZETTEER_H
