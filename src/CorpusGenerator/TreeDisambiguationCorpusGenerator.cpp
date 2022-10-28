//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include <Sentence.h>
#include <DisambiguatedWord.h>
#include "TreeDisambiguationCorpusGenerator.h"

/**
 * Constructor for the TreeDisambiguationCorpusGenerator which takes input the data directory and the file list for the
 * training files included. The constructor loads the treebank from the given directory including the given files
 * in the file list.
 *
 * @param folder Directory where the treebank files reside.
 * @param filelist File list.
 */
TreeDisambiguationCorpusGenerator::TreeDisambiguationCorpusGenerator(const string &folder) {
    treeBank = new TreeBankDrawable(folder);
}

TreeDisambiguationCorpusGenerator::~TreeDisambiguationCorpusGenerator() {
    delete treeBank;
}

/**
 * Creates a morphological disambiguation corpus from the treeBank. Calls generateAnnotatedSentence for each parse
 * tree in the treebank.
 *
 * @return Created disambiguation corpus.
 */
DisambiguationCorpus* TreeDisambiguationCorpusGenerator::generate() const{
    ParseTreeDrawable* parseTree;
    AnnotatedSentence* sentence;
    AnnotatedSentence* disambiguationSentence;
    auto* corpus = new DisambiguationCorpus();
    for (int i = 0; i < treeBank->size(); i++){
        parseTree = treeBank->get(i);
        if (parseTree->layerAll(ViewLayerType::INFLECTIONAL_GROUP)){
            sentence = parseTree->generateAnnotatedSentence();
            disambiguationSentence = new AnnotatedSentence();
            for (int j = 0; j < sentence->wordCount(); j++){
                disambiguationSentence->addWord(new DisambiguatedWord(sentence->getWord(j)->getName(), *((AnnotatedWord*) sentence->getWord(j))->getParse()));
            }
            corpus->addSentence(disambiguationSentence);
        }
    }
    return corpus;
}
