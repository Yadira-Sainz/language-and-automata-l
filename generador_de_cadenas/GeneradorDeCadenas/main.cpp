//
//  main.cpp
//  GeneradorDeCadenas
//
//  Created by Yadira Sainz on 29/08/24.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string genstring(int len, char alpha, char beta) {
    string cadena;

    for (int i = 0; i < len; ++i) {
        cadena += alpha + rand() % (beta - alpha + 1);
    }

    return cadena;
}

int main() {
    srand(time(0));
    int n, m;
    char alpha, beta;

    cout << "Entrada: " << endl;
    cin >> n >> m >> alpha >> beta;

    cout << endl << "Salida:" << endl;
    for (int i = 0; i < n; ++i) {
        int longitud = rand() % (m + 1);
        string cadena = genstring(longitud, alpha, beta);
        if (cadena.empty()) {
            cout << "<void>" << endl;
        } else {
            cout << cadena << endl;
        }
    }

    return 0;
}

