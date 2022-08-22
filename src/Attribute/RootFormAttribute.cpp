//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "RootFormAttribute.h"

/**
 * Discrete attribute for a given word. Returns the the root word
 * @param parse Morphological parse of the word.
 */
RootFormAttribute::RootFormAttribute(MorphologicalParse parse) : DiscreteAttribute(parse.getWord()->getName()){

}
