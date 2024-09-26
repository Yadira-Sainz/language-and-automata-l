//
//  operations.cpp
//  OperacionesConLenguajes
//
//  Created by Yadira Sainz on 11/09/24.
//

#include "operations.hpp"

lang Operations::lang_union(const lang& A, const lang& B) {
    lang result = A;
    result.insert(B.begin(), B.end());
    return result;
}

lang Operations::lang_intersection(const lang& A, const lang& B) {
    lang result;
    for (const auto& str : A) {
        if (B.find(str) != B.end()) {
            result.insert(str);
        }
    }
    return result;
}

lang Operations::lang_difference(const lang& A, const lang& B) {
    lang result;
    for (const auto& str : A) {
        if (B.find(str) == B.end()) {
            result.insert(str);
        }
    }
    return result;
}

lang Operations::lang_concatenation(const lang& A, const lang& B) {
    lang result;
    for (const auto& strA : A) {
        for (const auto& strB : B) {
            result.insert(strA + strB);
        }
    }
    return result;
}

lang Operations::lang_power(const lang& language, int p) {
    if (p == 0) {
        return {""};
    }
    lang result = language;
    for (int i = 1; i < p; ++i) {
        lang temp;
        for (const auto& str1 : result) {
            for (const auto& str2 : language) {
                temp.insert(str1 + str2);
            }
        }
        result = temp;
    }
    return result;
}
