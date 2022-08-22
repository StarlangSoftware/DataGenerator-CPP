//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include <AnnotatedSentence.h>
#include "Predicate.h"

/**
 * Discrete attribute for a given word. Returns the nearest predicate word to the given word
 * @param sentence Sentence where current word is in.
 * @param index Position of the current word in the sentence
 */
Predicate::Predicate(Sentence *sentence, int index) : DiscreteAttribute(((AnnotatedSentence*)sentence)->getPredicate(index)) {

}
