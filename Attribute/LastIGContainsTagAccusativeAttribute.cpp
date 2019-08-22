//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "LastIGContainsTagAccusativeAttribute.h"

/**
 * Binary attribute for a given word. If the last inflectional group of the word contains ACCUSATIVE tag,
 * the attribute will be "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
LastIGContainsTagAccusativeAttribute::LastIGContainsTagAccusativeAttribute(MorphologicalParse parse) : LastIGContainsTagAttribute(move(parse), MorphologicalTag::ACCUSATIVE){

}
