//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_NERDATASETGENERATOR_H
#define DATAGENERATOR_NERDATASETGENERATOR_H


#include "DataSetGenerator.h"
#include "../InstanceGenerator/NerInstanceGenerator.h"

class NerDataSetGenerator  : public DataSetGenerator{
public:
    NerDataSetGenerator(const string &folder, NerInstanceGenerator* instanceGenerator);
};


#endif //DATAGENERATOR_NERDATASETGENERATOR_H
