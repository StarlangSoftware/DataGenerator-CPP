//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "LastIGContainsTagGenitiveAttribute.h"

/**
 * Binary attribute for a given word. If the last inflectional group of the word contains GENITIVE tag,
 * the attribute will be "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
LastIGContainsTagGenitiveAttribute::LastIGContainsTagGenitiveAttribute(const MorphologicalParse& parse) : LastIGContainsTagAttribute(parse, MorphologicalTag::GENITIVE){

}
