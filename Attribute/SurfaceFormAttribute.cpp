//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include "SurfaceFormAttribute.h"

/**
 * Discrete attribute for a given word. Returns the surface form.
 * @param surfaceForm Surface form of the word.
 */
SurfaceFormAttribute::SurfaceFormAttribute(string surfaceForm) : DiscreteAttribute(move(surfaceForm)) {

}
