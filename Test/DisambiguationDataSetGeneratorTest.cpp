//
// Created by Olcay Taner YILDIZ on 12.01.2021.
//

#include "catch.hpp"
#include "../src/DataSetGenerator/DisambiguationDataSetGenerator.h"
#include "../src/InstanceGenerator/FeaturedDisambiguationInstanceGenerator.h"

TEST_CASE("DisambiguationDataSetGeneratorTest-testGenerate") {
    DisambiguationDataSetGenerator disambiguationDataSetGenerator = DisambiguationDataSetGenerator("../trees", new FeaturedDisambiguationInstanceGenerator(1));
    DataSet dataSet = disambiguationDataSetGenerator.generate();
    REQUIRE(88 == dataSet.sampleSize());
    REQUIRE(41 == dataSet.classCount());
    REQUIRE(4 == dataSet.attributeCount());
}