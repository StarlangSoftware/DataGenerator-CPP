//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "DataSetGenerator.h"

DataSetGenerator::DataSetGenerator(const string &folder, const string &fileList, InstanceGenerator *instanceGenerator) {
    treeBank = new TreeBankDrawable(folder, fileList);
    this->instanceGenerator = instanceGenerator;
}

void DataSetGenerator::setInstanceGenerator(InstanceGenerator *instanceGenerator) {
    this->instanceGenerator = instanceGenerator;
}

vector<Instance *> DataSetGenerator::generateInstanceListFromTree(ParseTreeDrawable *parseTree) {
    vector<Instance*> instanceList;
    AnnotatedSentence* annotatedSentence = parseTree->generateAnnotatedSentence();
    for (int i = 0; i < annotatedSentence->wordCount(); i++){
        Instance* generatedInstance = instanceGenerator->generateInstanceFromSentence(annotatedSentence, i);
        if (generatedInstance != nullptr){
            instanceList.push_back(generatedInstance);
        }
    }
    return instanceList;
}

DataSet DataSetGenerator::generate() {
    ParseTreeDrawable* parseTree;
    DataSet dataSet;
    for (int i = 0; i < treeBank->size(); i++){
        parseTree = treeBank->get(i);
        dataSet.addInstanceList(generateInstanceListFromTree(parseTree));
    }
    return dataSet;
}
