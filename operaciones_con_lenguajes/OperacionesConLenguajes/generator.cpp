//
//  generator.cpp
//  OperacionesConLenguajes
//
//  Created by Yadira Sainz on 11/09/24.
//

#include "generator.hpp"
#include <cstdlib>

std::string Generator::generateString(int length, char alpha, char beta) {
    std::string str;
    for (int i = 0; i < length; ++i) {
        str += alpha + rand() % (beta - alpha + 1);
    }
    return str;
}

lang Generator::generate(int n, int m, char alpha, char beta) {
    lang language;
    int numStrings = rand() % m + 1;
    for (int i = 0; i < numStrings; ++i) {
        int strLength = rand() % (n + 1);
        if (strLength == 0) {
            language.insert("");
        } else {
            language.insert(generateString(strLength, alpha, beta));
        }
    }
    return language;
}
