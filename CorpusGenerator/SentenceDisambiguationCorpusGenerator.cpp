//
// Created by Olcay Taner YILDIZ on 13.05.2020.
//

#include <AnnotatedSentence.h>
#include <DisambiguatedWord.h>
#include "SentenceDisambiguationCorpusGenerator.h"

/**
 * Constructor for the SentenceDisambiguationCorpusGenerator which takes input the data directory and the filelist for the
 * training files included. The constructor loads the corpus from the given directory including the given files
 * in the filelist.
 *
 * @param folder Directory where the sentence files reside.
 * @param filelist File list.
 */
SentenceDisambiguationCorpusGenerator::SentenceDisambiguationCorpusGenerator(const string &folder) {
    annotatedCorpus = new AnnotatedCorpus(folder);
}

SentenceDisambiguationCorpusGenerator::~SentenceDisambiguationCorpusGenerator() {
    delete annotatedCorpus;
}

/**
 * Creates a morphological disambiguation corpus from the sentence corpus.
 *
 * @return Created disambiguation corpus.
 */
DisambiguationCorpus* SentenceDisambiguationCorpusGenerator::generate() {
    AnnotatedSentence* sentence;
    AnnotatedSentence* disambiguationSentence;
    auto* corpus = new DisambiguationCorpus();
    for (int i = 0; i < annotatedCorpus->sentenceCount(); i++){
        sentence = (AnnotatedSentence*) annotatedCorpus->getSentence(i);
        disambiguationSentence = new AnnotatedSentence();
        for (int j = 0; j < sentence->wordCount(); j++) {
            disambiguationSentence->addWord(new DisambiguatedWord(sentence->getWord(j)->getName(),
                                                                  *((AnnotatedWord *) sentence->getWord(j))->getParse()));
        }
        corpus->addSentence(disambiguationSentence);
    }
    return corpus;
}
