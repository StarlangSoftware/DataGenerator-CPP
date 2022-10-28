//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "Dictionary/Word.h"
#include "IsTimeAttribute.h"

/**
 * Binary attribute for a given word. If the word represents a time form, the attribute will have the
 * value "true", otherwise "false".
 * @param surfaceForm Surface form of the word.
 */
IsTimeAttribute::IsTimeAttribute(const string& surfaceForm) : BinaryAttribute(Word::isTime(surfaceForm)) {

}
