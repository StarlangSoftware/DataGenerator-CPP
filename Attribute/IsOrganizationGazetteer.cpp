//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "IsOrganizationGazetteer.h"

IsOrganizationGazetteer::IsOrganizationGazetteer(string surfaceForm) : BinaryAttribute(gazetteer.contains(move(surfaceForm))) {
}
