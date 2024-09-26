//
//  visualization.hpp
//  OperacionesConLenguajes
//
//  Created by Yadira Sainz on 11/09/24.
//

#ifndef visualization_hpp
#define visualization_hpp

#include <set>
#include <string>

typedef std::set<std::string> lang;

class Visualization {
public:
    static void print_string(const std::string& str);
    static void print_lang(const lang& language, const std::string& name, bool newline = true);
};

#endif
