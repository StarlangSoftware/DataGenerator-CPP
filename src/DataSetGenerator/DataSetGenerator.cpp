//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "DataSetGenerator.h"

/**
 * Constructor for the DataSetGenerator which takes input the data directory, the pattern for the training files
 * included, includepunctuation, and an instanceGenerator. The constructor loads the treebank from the given directory
 * including the given files having the given pattern. If punctuations are not included, they are removed from
 * the data.
 * @param folder Directory where the treebank files reside.
 * @param instanceGenerator The instance generator used to generate the dataset.
 */
DataSetGenerator::DataSetGenerator(const string &folder, InstanceGenerator *instanceGenerator) {
    treeBank = new TreeBankDrawable(folder);
    this->instanceGenerator = instanceGenerator;
}

/**
 * Mutator for the instanceGenerator attribute.
 * @param _instanceGenerator Input instanceGenerator
 */
void DataSetGenerator::setInstanceGenerator(InstanceGenerator *_instanceGenerator) {
    this->instanceGenerator = _instanceGenerator;
}

/**
 * The method generates a set of instances (an instance from each word in the tree) from a single tree. The method
 * calls the instanceGenerator for each word in the sentence.
 * @param parseTree Parsetree for which a set of instances will be created
 * @return An array of instances.
 */
vector<Instance *> DataSetGenerator::generateInstanceListFromTree(const ParseTreeDrawable *parseTree) const{
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

/**
 * Creates a dataset from the treeBank. Calls generateInstanceListFromTree for each parse tree in the treebank.
 * @return Created dataset.
 */
DataSet DataSetGenerator::generate() const{
    ParseTreeDrawable* parseTree;
    DataSet dataSet;
    for (int i = 0; i < treeBank->size(); i++){
        parseTree = treeBank->get(i);
        dataSet.addInstanceList(generateInstanceListFromTree(parseTree));
    }
    return dataSet;
}
