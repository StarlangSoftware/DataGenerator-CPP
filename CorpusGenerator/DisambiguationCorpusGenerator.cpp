//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include <Sentence.h>
#include "DisambiguationCorpusGenerator.h"

DisambiguationCorpusGenerator::DisambiguationCorpusGenerator(const string &folder, const string &fileList) {
    treeBank = new TreeBankDrawable(folder, fileList);
}

DisambiguationCorpusGenerator::~DisambiguationCorpusGenerator() {
    delete treeBank;
}

DisambiguationCorpus* DisambiguationCorpusGenerator::generate() {
    ParseTreeDrawable* parseTree;
    Sentence* sentence;
    auto* corpus = new DisambiguationCorpus();
    for (int i = 0; i < treeBank->size(); i++){
        parseTree = treeBank->get(i);
        if (parseTree->layerAll(ViewLayerType::INFLECTIONAL_GROUP)){
            sentence = parseTree->generateAnnotatedSentence();
            corpus->addSentence(sentence);
        }
    }
    return corpus;
}
