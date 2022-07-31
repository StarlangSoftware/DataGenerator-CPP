//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_DISAMBIGUATIONDATASETGENERATOR_H
#define DATAGENERATOR_DISAMBIGUATIONDATASETGENERATOR_H


#include "DataSetGenerator.h"
#include "../InstanceGenerator/DisambiguationInstanceGenerator.h"

class DisambiguationDataSetGenerator : public DataSetGenerator{
public:
    DisambiguationDataSetGenerator(const string &folder, DisambiguationInstanceGenerator* instanceGenerator);
};


#endif //DATAGENERATOR_DISAMBIGUATIONDATASETGENERATOR_H
