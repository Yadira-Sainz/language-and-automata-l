//
//  main.cpp
//  OperacionesConLenguajes
//
//  Created by Yadira Sainz on 11/09/24.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "generator.hpp"
#include "operations.hpp"
#include "visualization.hpp"

using namespace std;

int main() {
    srand(time(0));

    int m, n, p;
    char alpha, beta;

    cout << "Entrada: " << endl;
    cin >> m >> n >> p >> alpha >> beta;

    lang languageA = Generator::generate(n, m, alpha, beta);
    lang languageB = Generator::generate(n, m, alpha, beta);

    cout << "\nSalida: " << endl;
    Visualization::print_lang(languageA, "A");
    Visualization::print_lang(languageB, "B");

    lang unionAB = Operations::lang_union(languageA, languageB);
    lang intersectionAB = Operations::lang_intersection(languageA, languageB);
    lang differenceAB = Operations::lang_difference(languageA, languageB);
    lang concatenationAB = Operations::lang_concatenation(languageA, languageB);
    lang powerA = Operations::lang_power(languageA, p);
    lang powerB = Operations::lang_power(languageB, p);

    Visualization::print_lang(unionAB, "Union");
    Visualization::print_lang(intersectionAB, "Intersection");
    Visualization::print_lang(differenceAB, "Difference");
    Visualization::print_lang(concatenationAB, "Concatenation");
    Visualization::print_lang(powerA, "A power " + std::to_string(p));
    Visualization::print_lang(powerB, "B power " + std::to_string(p));

    return 0;
}
