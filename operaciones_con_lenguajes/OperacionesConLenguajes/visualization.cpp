//
//  visualization.cpp
//  OperacionesConLenguajes
//
//  Created by Yadira Sainz on 11/09/24.
//

#include "visualization.hpp"
#include <iostream>

using namespace std;

void Visualization::print_string(const string& str) {
    if (str.empty()) {
            cout << "<void> ";
        } else {
            cout << str << " ";
        }
}

void Visualization::print_lang(const lang& language, const std::string& name, bool newline) {
    std::cout << name << ":\n[ ";
    if (language.empty()) {
        std::cout << " ";
    } else {
        for (const auto& str : language) {
            print_string(str);
        }
    }
    std::cout << "]" << (newline ? "\n" : "") << std::endl;
}

