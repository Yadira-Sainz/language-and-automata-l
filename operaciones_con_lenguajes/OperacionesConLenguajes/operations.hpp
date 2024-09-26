//
//  operations.hpp
//  OperacionesConLenguajes
//
//  Created by Yadira Sainz on 11/09/24.
//

#ifndef operations_hpp
#define operations_hpp

#include <set>
#include <string>

typedef std::set<std::string> lang;

class Operations {
public:
    static lang lang_union(const lang& A, const lang& B);
    static lang lang_intersection(const lang& A, const lang& B);
    static lang lang_difference(const lang& A, const lang& B);
    static lang lang_concatenation(const lang& A, const lang& B);
    static lang lang_power(const lang& language, int p);
};

#endif
