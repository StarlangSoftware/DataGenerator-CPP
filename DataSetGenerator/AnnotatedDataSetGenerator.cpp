//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include <AnnotatedSentence.h>
#include "AnnotatedDataSetGenerator.h"

AnnotatedDataSetGenerator::AnnotatedDataSetGenerator(const string &folder, const string &fileList,
                                                     InstanceGenerator *instanceGenerator) {
    corpus = new AnnotatedCorpus(folder, fileList);
    this->instanceGenerator = instanceGenerator;
}

void AnnotatedDataSetGenerator::setInstanceGenerator(InstanceGenerator *instanceGenerator) {
    this->instanceGenerator = instanceGenerator;
}

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
