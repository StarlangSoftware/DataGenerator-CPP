//
// Created by olcay on 2019-05-27.
//

#include "Dictionary/Word.h"
#include "IsHonorificAttribute.h"

/**
 * Binary attribute for a given word. If the word is "bay" or "bayan", the attribute will have the value "true",
 * otherwise "false".
 * @param surfaceForm Surface form of the word.
 */
IsHonorificAttribute::IsHonorificAttribute(const string& surfaceForm) : BinaryAttribute(Word::isHonorific(surfaceForm)) {

}
