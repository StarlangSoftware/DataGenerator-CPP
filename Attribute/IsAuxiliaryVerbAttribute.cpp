//
// Created by olcay on 2019-05-27.
//

#include "IsAuxiliaryVerbAttribute.h"

/**
 * Binary attribute for a given word. If the word is an auxiliary verb, the attribute will have
 * the value "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
IsAuxiliaryVerbAttribute::IsAuxiliaryVerbAttribute(MorphologicalParse parse) : BinaryAttribute(parse.isAuxiliary() && parse.isVerb()){
}
