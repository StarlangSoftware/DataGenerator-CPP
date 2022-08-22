//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "LastIGContainsTagAttribute.h"

/**
 * Binary attribute for a given word. If the last inflectional group of the word contains tag,
 * the attribute will be "true", otherwise "false".
 * @param parse Morphological parse of the word.
 * @param tag Tag that is checked in the last inflectional group.
 */
LastIGContainsTagAttribute::LastIGContainsTagAttribute(MorphologicalParse parse, MorphologicalTag tag) : BinaryAttribute(parse.lastIGContainsTag(tag)){
}
