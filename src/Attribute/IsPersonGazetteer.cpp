//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "IsPersonGazetteer.h"

/**
 * Binary attribute for a given word. If the word is listed in the Person Gazetteer file, the attribute will
 * have the value "true", otherwise "false".
 * @param surfaceForm Surface form of the word.
 */
IsPersonGazetteer::IsPersonGazetteer(const string& surfaceForm) : BinaryAttribute(gazetteer.contains(surfaceForm)) {
}
