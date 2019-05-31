//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "IsLocationGazetteer.h"

IsLocationGazetteer::IsLocationGazetteer(string surfaceForm) : BinaryAttribute(gazetteer.contains(move(surfaceForm))) {
}
