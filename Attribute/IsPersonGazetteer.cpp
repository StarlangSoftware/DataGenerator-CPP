//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "IsPersonGazetteer.h"

IsPersonGazetteer::IsPersonGazetteer(string surfaceForm) : BinaryAttribute(gazetteer.contains(move(surfaceForm))) {
}
