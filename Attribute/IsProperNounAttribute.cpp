//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "IsProperNounAttribute.h"

IsProperNounAttribute::IsProperNounAttribute(MorphologicalParse parse) : BinaryAttribute(parse.isProperNoun()){
}
