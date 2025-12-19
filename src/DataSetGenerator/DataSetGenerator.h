//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_DATASETGENERATOR_H
#define DATAGENERATOR_DATASETGENERATOR_H


#include <TreeBankDrawable.h>
#include "DataSet/DataSet.h"
#include "../InstanceGenerator/InstanceGenerator.h"

class DataSetGenerator {
private:
    TreeBankDrawable* treeBank;
protected:
    InstanceGenerator* instanceGenerator;
    vector<Instance*> generateInstanceListFromTree(const ParseTreeDrawable* parseTree) const;
public:
    DataSetGenerator(const string &folder, InstanceGenerator* instanceGenerator);
    void setInstanceGenerator(InstanceGenerator* instanceGenerator);
    DataSet generate() const;
};


#endif //DATAGENERATOR_DATASETGENERATOR_H
