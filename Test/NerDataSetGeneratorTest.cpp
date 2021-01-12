//
// Created by Olcay Taner YILDIZ on 12.01.2021.
//

#include "catch.hpp"
#include "../DataSetGenerator/NerDataSetGenerator.h"
#include "../InstanceGenerator/FeaturedNerInstanceGenerator.h"

TEST_CASE("NerDataSetGeneratorTest-testGenerate") {
    NerDataSetGenerator nerDataSetGenerator = NerDataSetGenerator("trees/", "trees.txt", new FeaturedNerInstanceGenerator(1));
    DataSet dataSet = nerDataSetGenerator.generate();
    REQUIRE(88 == dataSet.sampleSize());
    REQUIRE(3 == dataSet.classCount());
    REQUIRE(66 == dataSet.attributeCount());
}