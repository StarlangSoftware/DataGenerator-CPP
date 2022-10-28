//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "LastIGContainsPossessiveAttribute.h"

/**
 * Binary attribute for a given word. If the last inflectional group of the word contains possessive information,
 * the attribute will be "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
LastIGContainsPossessiveAttribute::LastIGContainsPossessiveAttribute(const MorphologicalParse& parse) : BinaryAttribute(parse.lastIGContainsPossessive()) {

}
