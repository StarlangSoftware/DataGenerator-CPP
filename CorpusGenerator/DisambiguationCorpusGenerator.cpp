//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include <Sentence.h>
#include "DisambiguationCorpusGenerator.h"

/**
 * Constructor for the DisambiguationCorpusGenerator which takes input the data directory and the pattern for the
 * training files included. The constructor loads the treebank from the given directory including the given files
 * having the given pattern.
 *
 * @param directory Directory where the treebank files reside.
 * @param pattern Pattern of the tree files to be included in the treebank. Use "." for all files.
 */
DisambiguationCorpusGenerator::DisambiguationCorpusGenerator(const string &folder, const string &fileList) {
    treeBank = new TreeBankDrawable(folder, fileList);
}

DisambiguationCorpusGenerator::~DisambiguationCorpusGenerator() {
    delete treeBank;
}

/**
 * Creates a morphological disambiguation corpus from the treeBank. Calls generateAnnotatedSentence for each parse
 * tree in the treebank.
 *
 * @return Created disambiguation corpus.
 */
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
