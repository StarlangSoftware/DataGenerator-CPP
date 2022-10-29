//
// Created by Olcay Taner YILDIZ on 12.01.2021.
//

#include <WordNet.h>
#include "catch.hpp"
#include "../src/DataSetGenerator/AnnotatedDataSetGenerator.h"
#include "../src/InstanceGenerator/FeaturedNerInstanceGenerator.h"
#include "../src/InstanceGenerator/FeaturedSemanticInstanceGenerator.h"
#include "../src/InstanceGenerator/FeaturedShallowParseInstanceGenerator.h"
#include "../src/InstanceGenerator/FeaturedDisambiguationInstanceGenerator.h"

TEST_CASE("AnnotatedDataSetGeneratorTest-testNERGenerate") {
    AnnotatedDataSetGenerator annotatedDataSetGenerator = AnnotatedDataSetGenerator("../sentences", new FeaturedNerInstanceGenerator(1));
    DataSet dataSet = annotatedDataSetGenerator.generate();
    REQUIRE(101 == dataSet.sampleSize());
    REQUIRE(3 == dataSet.classCount());
    REQUIRE(66 == dataSet.attributeCount());
}

TEST_CASE("AnnotatedDataSetGeneratorTest-testSemanticGenerate") {
    FsmMorphologicalAnalyzer fsmMorphologicalAnalyzer = FsmMorphologicalAnalyzer();
    WordNet turkish = WordNet();
    AnnotatedDataSetGenerator annotatedDataSetGenerator = AnnotatedDataSetGenerator("../sentences", new FeaturedSemanticInstanceGenerator(fsmMorphologicalAnalyzer, turkish, 1));
    DataSet dataSet = annotatedDataSetGenerator.generate();
    REQUIRE(100 == dataSet.sampleSize());
    REQUIRE(70 == dataSet.classCount());
    REQUIRE(66 == dataSet.attributeCount());
}

TEST_CASE("AnnotatedDataSetGeneratorTest-testShallowParseGenerate") {
    AnnotatedDataSetGenerator annotatedDataSetGenerator = AnnotatedDataSetGenerator("../sentences", new FeaturedShallowParseInstanceGenerator(1));
    DataSet dataSet = annotatedDataSetGenerator.generate();
    REQUIRE(96 == dataSet.sampleSize());
    REQUIRE(6 == dataSet.classCount());
    REQUIRE(66 == dataSet.attributeCount());
}

TEST_CASE("AnnotatedDataSetGeneratorTest-testDisambiguationGenerate") {
    AnnotatedDataSetGenerator annotatedDataSetGenerator = AnnotatedDataSetGenerator("../sentences", new FeaturedDisambiguationInstanceGenerator(1));
    DataSet dataSet = annotatedDataSetGenerator.generate();
    REQUIRE(101 == dataSet.sampleSize());
    REQUIRE(43 == dataSet.classCount());
    REQUIRE(4 == dataSet.attributeCount());
}