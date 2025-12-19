//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_ANNOTATEDDATASETGENERATOR_H
#define DATAGENERATOR_ANNOTATEDDATASETGENERATOR_H

#include <AnnotatedCorpus.h>
#include "DataSet/DataSet.h"
#include "../InstanceGenerator/InstanceGenerator.h"

class AnnotatedDataSetGenerator {
private:
    AnnotatedCorpus* corpus;
protected:
    InstanceGenerator* instanceGenerator;
public:
    AnnotatedDataSetGenerator(const string& folder, InstanceGenerator* instanceGenerator);
    void setInstanceGenerator(InstanceGenerator* _instanceGenerator);
    [[nodiscard]] DataSet generate() const;
};


#endif //DATAGENERATOR_ANNOTATEDDATASETGENERATOR_H
