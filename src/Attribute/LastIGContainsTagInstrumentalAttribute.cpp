//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "LastIGContainsTagInstrumentalAttribute.h"

/**
 * Binary attribute for a given word. If the last inflectional group of the word contains INSTRUMENTAL tag,
 * the attribute will be "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
LastIGContainsTagInstrumentalAttribute::LastIGContainsTagInstrumentalAttribute(const MorphologicalParse& parse) : LastIGContainsTagAttribute(parse, MorphologicalTag::INSTRUMENTAL){

}
