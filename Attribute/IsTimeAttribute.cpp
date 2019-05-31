//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include <Word.h>
#include "IsTimeAttribute.h"

IsTimeAttribute::IsTimeAttribute(string surfaceForm) : BinaryAttribute(Word::isTime(move(surfaceForm))) {

}
