//
// Created by olcay on 2019-05-27.
//

#include "CaseAttribute.h"

/**
 * Discrete attribute for a given word. If the last inflectional group of the word contains case information, the
 * attribute will have that case value. Otherwise the attribute will have the value null.
 * @param parse Morphological parse of the word.
 */
CaseAttribute::CaseAttribute(MorphologicalParse parse) : DiscreteAttribute(parse.lastIGContainsCase()){
}
