//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "DisambiguationDataSetGenerator.h"

/**
 * Constructor for the DisambiguationDataSetGenerator which takes input the data directory, the pattern for the training files
 * included, includepunctuation, and an instanceGenerator. The constructor calls its super class with these inputs.
 * @param directory Directory where the treebank files reside.
 * @param pattern Pattern of the tree files to be included in the treebank. Use "." for all files.
 * @param includePunctuation If true, punctuation symbols are also included in the dataset, false otherwise.
 * @param disambiguationInstanceGenerator The instance generator used to generate the dataset.
 */
DisambiguationDataSetGenerator::DisambiguationDataSetGenerator(const string &folder, const string &fileList,
                                                               DisambiguationInstanceGenerator *instanceGenerator) : DataSetGenerator(folder, fileList, instanceGenerator){

}
