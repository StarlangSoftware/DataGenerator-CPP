//
// Created by Olcay Taner YILDIZ on 12.01.2021.
//

#include "catch.hpp"
#include "../DataSetGenerator/SemanticDataSetGenerator.h"
#include "../InstanceGenerator/FeaturedSemanticInstanceGenerator.h"

TEST_CASE("SemanticDataSetGeneratorTest-testGenerate") {
    FsmMorphologicalAnalyzer fsmMorphologicalAnalyzer = FsmMorphologicalAnalyzer();
    WordNet turkish = WordNet();
    SemanticDataSetGenerator semanticDataSetGenerator = SemanticDataSetGenerator("../trees", new FeaturedSemanticInstanceGenerator(fsmMorphologicalAnalyzer, turkish, 1));
    DataSet dataSet = semanticDataSetGenerator.generate();
    REQUIRE(88 == dataSet.sampleSize());
    REQUIRE(64 == dataSet.classCount());
    REQUIRE(66 == dataSet.attributeCount());
}