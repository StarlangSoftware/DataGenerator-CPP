//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_DISAMBIGUATIONCORPUSGENERATOR_H
#define DATAGENERATOR_DISAMBIGUATIONCORPUSGENERATOR_H

#include <TreeBankDrawable.h>
#include <DisambiguationCorpus.h>

class DisambiguationCorpusGenerator {
private:
    TreeBankDrawable* treeBank;
public:
    ~DisambiguationCorpusGenerator();
    DisambiguationCorpusGenerator(const string& folder, const string& fileList);
    DisambiguationCorpus* generate();
};


#endif //DATAGENERATOR_DISAMBIGUATIONCORPUSGENERATOR_H
