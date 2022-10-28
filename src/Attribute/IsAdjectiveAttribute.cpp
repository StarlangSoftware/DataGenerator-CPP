//
// Created by olcay on 2019-05-27.
//

#include "IsAdjectiveAttribute.h"

/**
 * Binary attribute for a given word. If the word is an adjective, the attribute will have
 * the value "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
IsAdjectiveAttribute::IsAdjectiveAttribute(const MorphologicalParse& parse) : BinaryAttribute(parse.isAdjective()){
}
