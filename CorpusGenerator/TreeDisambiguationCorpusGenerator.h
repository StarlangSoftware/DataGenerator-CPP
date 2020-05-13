//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_TREEDISAMBIGUATIONCORPUSGENERATOR_H
#define DATAGENERATOR_TREEDISAMBIGUATIONCORPUSGENERATOR_H

#include <TreeBankDrawable.h>
#include <DisambiguationCorpus.h>

class TreeDisambiguationCorpusGenerator {
private:
    TreeBankDrawable* treeBank;
public:
    ~TreeDisambiguationCorpusGenerator();
    TreeDisambiguationCorpusGenerator(const string& folder, const string& fileList);
    DisambiguationCorpus* generate();
};


#endif //DATAGENERATOR_TREEDISAMBIGUATIONCORPUSGENERATOR_H
