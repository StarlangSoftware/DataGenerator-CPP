//
// Created by olcay on 2019-05-27.
//

#include <Word.h>
#include "IsCapitalAttribute.h"

/**
 * Binary attribute for a given word. If the starting letter of the word is capital, the attribute will have
 * the value "true", otherwise "false".
 * @param surfaceForm Surface form of the word.
 */
IsCapitalAttribute::IsCapitalAttribute(string surfaceForm) : BinaryAttribute(isUpper(surfaceForm)) {
}

bool IsCapitalAttribute::isUpper(const string& surface) {
    string s = Word::charAt(surface, 0);
    if (s[0] >= 'A' && s[0] <= 'Z'){
        return true;
    }
    if (s == "Ç" || s == "Ö" || s == "Ğ" || s == "Ü" || s == "Ş" || s == "İ"){
        return true;
    }
    return false;
}
