//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "Dictionary/Word.h"
#include "IsMoneyAttribute.h"

/**
 * Binary attribute for a given word. If the word is "dolar", "euro", "sterlin", etc., the attribute will have the
 * value "true", otherwise "false".
 * @param surfaceForm Surface form of the word.
 */
IsMoneyAttribute::IsMoneyAttribute(string surfaceForm) : BinaryAttribute(Word::isMoney(move(surfaceForm))) {

}
