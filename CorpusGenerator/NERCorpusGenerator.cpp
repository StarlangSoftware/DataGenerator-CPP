//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "NERCorpusGenerator.h"

NERCorpusGenerator::NERCorpusGenerator(const string &folder, const string &fileList) {
    treeBank = new TreeBankDrawable(folder, fileList);
}

NERCorpusGenerator::~NERCorpusGenerator() {
    delete treeBank;
}

NERCorpus *NERCorpusGenerator::generate() {
    ParseTreeDrawable* parseTree;
    Sentence* sentence;
    auto* corpus = new NERCorpus();
    for (int i = 0; i < treeBank->size(); i++){
        parseTree = treeBank->get(i);
        if (parseTree->layerAll(ViewLayerType::NER)){
            sentence = parseTree->generateAnnotatedSentence();
            corpus->addSentence(sentence);
        }
    }
    return corpus;
}
