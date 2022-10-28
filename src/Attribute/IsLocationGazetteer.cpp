//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "IsLocationGazetteer.h"

/**
 * Binary attribute for a given word. If the word is listed in the Location Gazetteer file, the attribute will
 * have the value "true", otherwise "false".
 * @param surfaceForm Surface form of the word.
 */
IsLocationGazetteer::IsLocationGazetteer(const string& surfaceForm) : BinaryAttribute(gazetteer.contains(surfaceForm)) {
}
