//
// Created by olcay on 2019-05-27.
//

#include "IsDateAttribute.h"

/**
 * Binary attribute for a given word. If the word represents a date (if the morphological parse contains
 * tag DATE), the attribute will have the value "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
IsDateAttribute::IsDateAttribute(MorphologicalParse parse) : BinaryAttribute(parse.isDate()){
}
