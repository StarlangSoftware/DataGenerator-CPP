//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "LastIGContainsTagAblativeAttribute.h"

/**
 * Binary attribute for a given word. If the last inflectional group of the word contains ABLATIVE tag,
 * the attribute will be "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
LastIGContainsTagAblativeAttribute::LastIGContainsTagAblativeAttribute(const MorphologicalParse& parse) : LastIGContainsTagAttribute(parse, MorphologicalTag::ABLATIVE) {

}
