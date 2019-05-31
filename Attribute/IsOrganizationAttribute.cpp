//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include <Word.h>
#include "IsOrganizationAttribute.h"

IsOrganizationAttribute::IsOrganizationAttribute(string surfaceForm) : BinaryAttribute(Word::isOrganization(move(surfaceForm))) {

}
