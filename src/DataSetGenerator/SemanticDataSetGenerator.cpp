//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "SemanticDataSetGenerator.h"

/**
 * Constructor for the NerDataSetGenerator which takes input the data directory, the pattern for the training files
 * included, and an instanceGenerator. The constructor calls its super class with these inputs.
 * @param folder Directory where the treebank files reside.
 * @param semanticInstanceGenerator The instance generator used to generate the dataset.
 */
SemanticDataSetGenerator::SemanticDataSetGenerator(const string &folder,
                                                   SemanticInstanceGenerator *semanticInstanceGenerator) : DataSetGenerator(folder, semanticInstanceGenerator){
}
