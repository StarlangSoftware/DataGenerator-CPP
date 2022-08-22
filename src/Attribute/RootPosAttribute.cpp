//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "RootPosAttribute.h"

/**
 * Discrete attribute for a given word. Returns the part of speech of the root word
 * @param parse Morphological parse of the word.
 */
RootPosAttribute::RootPosAttribute(MorphologicalParse parse) : DiscreteAttribute(parse.getRootPos()){

}
