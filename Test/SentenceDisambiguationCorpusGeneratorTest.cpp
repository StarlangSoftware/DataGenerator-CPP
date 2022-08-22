//
// Created by Olcay Taner YILDIZ on 12.01.2021.
//

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "../src/CorpusGenerator/SentenceDisambiguationCorpusGenerator.h"

TEST_CASE("SentenceDisambiguationCorpusGeneratorTest-testGenerate") {
    SentenceDisambiguationCorpusGenerator sentenceDisambiguationCorpusGenerator = SentenceDisambiguationCorpusGenerator("../sentences");
    DisambiguationCorpus* disambiguationCorpus = sentenceDisambiguationCorpusGenerator.generate();
    REQUIRE(10 == disambiguationCorpus->sentenceCount());
    REQUIRE(101 == disambiguationCorpus->numberOfWords());
    REQUIRE(14 == disambiguationCorpus->maxSentenceLength());
}