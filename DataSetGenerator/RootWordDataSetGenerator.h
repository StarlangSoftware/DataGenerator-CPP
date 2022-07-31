//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_ROOTWORDDATASETGENERATOR_H
#define DATAGENERATOR_ROOTWORDDATASETGENERATOR_H


#include "DataSetGenerator.h"
#include "../InstanceGenerator/RootWordInstanceGenerator.h"

class RootWordDataSetGenerator : public DataSetGenerator{
public:
    RootWordDataSetGenerator(const string &folder, RootWordInstanceGenerator* rootWordInstanceGenerator);
};


#endif //DATAGENERATOR_ROOTWORDDATASETGENERATOR_H
