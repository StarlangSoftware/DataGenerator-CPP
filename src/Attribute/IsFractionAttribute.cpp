//
// Created by olcay on 2019-05-27.
//

#include "IsFractionAttribute.h"

/**
 * Binary attribute for a given word. If the word is represents a fraction (if the morphological parse contains
 * tag FRACTION), the attribute will have the value "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
IsFractionAttribute::IsFractionAttribute(MorphologicalParse parse) : BinaryAttribute(parse.isFraction()){
}
