//
// Created by olcay on 2019-05-27.
//

#include <Word.h>
#include "IsHonorificAttribute.h"

IsHonorificAttribute::IsHonorificAttribute(string surfaceForm) : BinaryAttribute(Word::isHonorific(move(surfaceForm))) {

}
