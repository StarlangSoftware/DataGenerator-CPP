//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "NerDataSetGenerator.h"

/**
 * Constructor for the NerDataSetGenerator which takes input the data directory, the pattern for the training files
 * included, and an instanceGenerator. The constructor calls its super class with these inputs.
 * @param folder Directory where the treebank files reside.
 * @param instanceGenerator The instance generator used to generate the dataset.
 */
NerDataSetGenerator::NerDataSetGenerator(const string &folder,
                                         NerInstanceGenerator *instanceGenerator) : DataSetGenerator(folder, instanceGenerator){

}
