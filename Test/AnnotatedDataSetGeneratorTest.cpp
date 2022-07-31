//
// Created by Olcay Taner YILDIZ on 12.01.2021.
//

#include <WordNet.h>
#include "catch.hpp"
#include "../DataSetGenerator/AnnotatedDataSetGenerator.h"
#include "../InstanceGenerator/FeaturedNerInstanceGenerator.h"
#include "../InstanceGenerator/FeaturedSemanticInstanceGenerator.h"
#include "../InstanceGenerator/FeaturedShallowParseInstanceGenerator.h"
#include "../InstanceGenerator/FeaturedDisambiguationInstanceGenerator.h"

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
    REQUIRE(101 == dataSet.sampleSize());
    REQUIRE(71 == dataSet.classCount());
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