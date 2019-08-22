//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "NERCorpusGenerator.h"

/**
 * Constructor for the NERCorpusGenerator which takes input the data directory and the pattern for the training files
 * included. The constructor loads the treebank from the given directory including the given files having the given
 * pattern.
 *
 * @param directory Directory where the treebank files reside.
 * @param pattern Pattern of the tree files to be included in the treebank. Use "." for all files.
 */
NERCorpusGenerator::NERCorpusGenerator(const string &folder, const string &fileList) {
    treeBank = new TreeBankDrawable(folder, fileList);
}

NERCorpusGenerator::~NERCorpusGenerator() {
    delete treeBank;
}

/**
 * Creates a named entity recognition corpus from the treeBank. Calls generateAnnotatedSentence for each parse tree
 * in the treebank.
 *
 * @return Created corpus.
 */
NERCorpus *NERCorpusGenerator::generate() {
    ParseTreeDrawable* parseTree;
    Sentence* sentence;
    auto* corpus = new NERCorpus();
    for (int i = 0; i < treeBank->size(); i++){
        parseTree = treeBank->get(i);
        if (parseTree->layerAll(ViewLayerType::NER)){
            sentence = parseTree->generateAnnotatedSentence();
            ((Corpus*) corpus)->addSentence(sentence);
        }
    }
    return corpus;
}
