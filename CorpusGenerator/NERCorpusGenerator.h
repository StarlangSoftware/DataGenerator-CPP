//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_NERCORPUSGENERATOR_H
#define DATAGENERATOR_NERCORPUSGENERATOR_H


#include <TreeBankDrawable.h>
#include <NERCorpus.h>

class NERCorpusGenerator {
private:
    TreeBankDrawable* treeBank;
public:
    ~NERCorpusGenerator();
    NERCorpusGenerator(const string& folder, const string& fileList);
    NERCorpus* generate();
};


#endif //DATAGENERATOR_NERCORPUSGENERATOR_H
