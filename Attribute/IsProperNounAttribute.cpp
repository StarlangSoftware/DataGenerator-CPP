//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "IsProperNounAttribute.h"

/**
 * Binary attribute for a given word. If the word represents a date (if the morphological parse contains
 * tag PROPERNOUN), the attribute will have the value "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
IsProperNounAttribute::IsProperNounAttribute(MorphologicalParse parse) : BinaryAttribute(parse.isProperNoun()){
}
