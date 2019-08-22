//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "IsNumberAttribute.h"

/**
 * Binary attribute for a given word. If the word is represents a number (if the morphological parse contains
 * tag REAL or CARDINAL), the attribute will have the value "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
IsNumberAttribute::IsNumberAttribute(MorphologicalParse parse) : BinaryAttribute(parse.isNumber()){
}
