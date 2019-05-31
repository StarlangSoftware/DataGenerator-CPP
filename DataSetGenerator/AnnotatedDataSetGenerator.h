//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_ANNOTATEDDATASETGENERATOR_H
#define DATAGENERATOR_ANNOTATEDDATASETGENERATOR_H

#include <AnnotatedCorpus.h>
#include <DataSet.h>
#include "../InstanceGenerator/InstanceGenerator.h"

class AnnotatedDataSetGenerator {
private:
    AnnotatedCorpus* corpus;
protected:
    InstanceGenerator* instanceGenerator;
public:
    AnnotatedDataSetGenerator(const string& folder, const string& fileList, InstanceGenerator* instanceGenerator);
    void setInstanceGenerator(InstanceGenerator* instanceGenerator);
    DataSet generate();
};


#endif //DATAGENERATOR_ANNOTATEDDATASETGENERATOR_H
