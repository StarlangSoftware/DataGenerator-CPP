//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include <AnnotatedSentence.h>
#include "AnnotatedDataSetGenerator.h"

/**
 * Constructor for the AnnotatedDataSetGenerator which takes input the data directory, the pattern for the
 * training files included, and an instanceGenerator. The constructor loads the sentence corpus from the given
 * directory including the given files having the given pattern.
 * @param directory Directory where the corpus files reside.
 * @param pattern Pattern of the tree files to be included in the treebank. Use "." for all files.
 * @param instanceGenerator The instance generator used to generate the dataset.
 */
AnnotatedDataSetGenerator::AnnotatedDataSetGenerator(const string &folder, const string &fileList,
                                                     InstanceGenerator *instanceGenerator) {
    corpus = new AnnotatedCorpus(folder, fileList);
    this->instanceGenerator = instanceGenerator;
}

/**
 * Mutator for the instanceGenerator attribute.
 * @param instanceGenerator Input instanceGenerator
 */
void AnnotatedDataSetGenerator::setInstanceGenerator(InstanceGenerator *instanceGenerator) {
    this->instanceGenerator = instanceGenerator;
}

/**
 * Creates a dataset from the corpus. Calls generateInstanceFromSentence for each parse sentence in the corpus.
 * @return Created dataset.
 */
DataSet AnnotatedDataSetGenerator::generate() {
    AnnotatedSentence* sentence;
    DataSet dataSet;
    for (int i = 0; i < corpus->sentenceCount(); i++){
        sentence = (AnnotatedSentence*) corpus->getSentence(i);
        for (int j = 0; j < sentence->wordCount(); j++){
            Instance* generatedInstance = instanceGenerator->generateInstanceFromSentence(sentence, j);
            if (generatedInstance != nullptr){
                dataSet.addInstance(generatedInstance);
            }
        }
    }
    return dataSet;
}
