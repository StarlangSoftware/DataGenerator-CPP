//
// Created by Olcay Taner YILDIZ on 12.01.2021.
//

#ifndef DATAGENERATOR_FEATUREDSEMANTICINSTANCEGENERATOR_H
#define DATAGENERATOR_FEATUREDSEMANTICINSTANCEGENERATOR_H


#include "SemanticInstanceGenerator.h"

class FeaturedSemanticInstanceGenerator : public SemanticInstanceGenerator{
public:
    FeaturedSemanticInstanceGenerator(FsmMorphologicalAnalyzer& fsm, WordNet& wordNet, int windowSize);

protected:
    void addAttributesForWords(Instance* current, Sentence* sentence, int wordIndex) const override;
    void addAttributesForEmptyWords(Instance* current, const string& emptyWord) const override;
};


#endif //DATAGENERATOR_FEATUREDSEMANTICINSTANCEGENERATOR_H
