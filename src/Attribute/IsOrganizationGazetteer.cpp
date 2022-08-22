//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "IsOrganizationGazetteer.h"

/**
 * Binary attribute for a given word. If the word is listed in the Organization Gazetteer file, the attribute will
 * have the value "true", otherwise "false".
 * @param surfaceForm Surface form of the word.
 */
IsOrganizationGazetteer::IsOrganizationGazetteer(string surfaceForm) : BinaryAttribute(gazetteer.contains(move(surfaceForm))) {
}
