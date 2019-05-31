//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "IsNumberAttribute.h"

IsNumberAttribute::IsNumberAttribute(MorphologicalParse parse) : BinaryAttribute(parse.isNumber()){
}
