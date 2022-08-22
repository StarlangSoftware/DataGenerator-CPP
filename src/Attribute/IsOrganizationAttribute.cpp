//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "Dictionary/Word.h"
#include "IsOrganizationAttribute.h"

/**
 * Binary attribute for a given word. If the word is "corp.", "inc." or "co.", the attribute will have the
 * value "true", otherwise "false".
 * @param surfaceForm Surface form of the word.
 */
IsOrganizationAttribute::IsOrganizationAttribute(string surfaceForm) : BinaryAttribute(Word::isOrganization(move(surfaceForm))) {

}
