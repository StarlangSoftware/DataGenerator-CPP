//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_SEMANTICINSTANCEGENERATOR_H
#define DATAGENERATOR_SEMANTICINSTANCEGENERATOR_H


#include <FsmMorphologicalAnalyzer.h>
#include <WordNet.h>
#include "SimpleWindowInstanceGenerator.h"

class SemanticInstanceGenerator : public SimpleWindowInstanceGenerator{
private:
    FsmMorphologicalAnalyzer fsm;
    WordNet wordNet;
public:
    SemanticInstanceGenerator(FsmMorphologicalAnalyzer& fsm, WordNet& wordNet);
    Instance* generateInstanceFromSentence(Sentence* sentence, int wordIndex) override;
};


#endif //DATAGENERATOR_SEMANTICINSTANCEGENERATOR_H
