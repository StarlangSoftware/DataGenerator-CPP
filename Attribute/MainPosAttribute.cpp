//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "MainPosAttribute.h"

/**
 * Discrete attribute for a given word. Returns the last part of speech (main part of speech) of the word
 * @param parse Morphological parse of the word.
 */
MainPosAttribute::MainPosAttribute(MorphologicalParse parse) : DiscreteAttribute(parse.getPos()) {
}
