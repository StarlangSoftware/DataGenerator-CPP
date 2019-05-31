//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include <Word.h>
#include "IsMoneyAttribute.h"

IsMoneyAttribute::IsMoneyAttribute(string surfaceForm) : BinaryAttribute(Word::isMoney(move(surfaceForm))) {

}
