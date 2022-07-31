//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_SEMANTICDATASETGENERATOR_H
#define DATAGENERATOR_SEMANTICDATASETGENERATOR_H


#include "DataSetGenerator.h"
#include "../InstanceGenerator/SemanticInstanceGenerator.h"

class SemanticDataSetGenerator : public DataSetGenerator{
public:
    SemanticDataSetGenerator(const string &folder, SemanticInstanceGenerator* semanticInstanceGenerator);
};


#endif //DATAGENERATOR_SEMANTICDATASETGENERATOR_H
