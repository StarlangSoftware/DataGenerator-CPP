//
// Created by Olcay Taner YILDIZ on 13.05.2020.
//

#ifndef DATAGENERATOR_SENTENCEDISAMBIGUATIONCORPUSGENERATOR_H
#define DATAGENERATOR_SENTENCEDISAMBIGUATIONCORPUSGENERATOR_H


#include <DisambiguationCorpus.h>
#include <AnnotatedCorpus.h>

class SentenceDisambiguationCorpusGenerator {
private:
    AnnotatedCorpus* annotatedCorpus;
public:
    ~SentenceDisambiguationCorpusGenerator();
    explicit SentenceDisambiguationCorpusGenerator(const string& folder);
    DisambiguationCorpus* generate();
};


#endif //DATAGENERATOR_SENTENCEDISAMBIGUATIONCORPUSGENERATOR_H
