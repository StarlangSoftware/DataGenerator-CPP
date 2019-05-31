//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#include <AnnotatedSentence.h>
#include "Predicate.h"

Predicate::Predicate(Sentence *sentence, int index) : DiscreteAttribute(((AnnotatedSentence*)sentence)->getPredicate(index)) {

}
