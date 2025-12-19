//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "RootWordDataSetGenerator.h"

/**
 * Constructor for the RootWordDataSetGenerator which takes input the data directory, the pattern for the training files
 * included, includepunctuation, and an instanceGenerator. The constructor calls its super class with these inputs.
 * @param folder Directory where the treebank files reside.
 * @param rootWordInstanceGenerator The instance generator used to generate the dataset.
 */
RootWordDataSetGenerator::RootWordDataSetGenerator(const string &folder,
                                                   RootWordInstanceGenerator *rootWordInstanceGenerator) : DataSetGenerator(folder, rootWordInstanceGenerator){

}
