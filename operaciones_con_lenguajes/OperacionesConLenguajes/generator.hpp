//
//  generator.hpp
//  OperacionesConLenguajes
//
//  Created by Yadira Sainz on 11/09/24.
//

#ifndef generator_hpp
#define generator_hpp

#include <set>
#include <string>

typedef std::set<std::string> lang;

class Generator {
public:
    static std::string generateString(int length, char alpha, char beta);
    static lang generate(int n, int m, char alpha, char beta);
};

#endif
