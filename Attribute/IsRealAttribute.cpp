//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "IsRealAttribute.h"

/**
 * Binary attribute for a given word. If the word is represents a real number (if the morphological parse contains
 * tag REAL), the attribute will have the value "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
IsRealAttribute::IsRealAttribute(MorphologicalParse parse) : BinaryAttribute(parse.isReal()){
}
