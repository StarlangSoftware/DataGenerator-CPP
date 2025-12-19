//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "DisambiguationDataSetGenerator.h"

/**
 * Constructor for the DisambiguationDataSetGenerator which takes input the data directory, the pattern for the training files
 * included, includepunctuation, and an instanceGenerator. The constructor calls its super class with these inputs.
 * @param folder Directory where the treebank files reside.
 * @param instanceGenerator The instance generator used to generate the dataset.
 */
DisambiguationDataSetGenerator::DisambiguationDataSetGenerator(const string &folder,
                                                               DisambiguationInstanceGenerator *instanceGenerator) : DataSetGenerator(folder, instanceGenerator){

}
