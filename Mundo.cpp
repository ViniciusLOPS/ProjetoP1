//
// Created by User on 14/04/2018.
//

#include <iostream>
#include "Mundo.h"
using namespace std;

Mundo::Mundo() {
    size_x = 60;
    size_y = 30;
    for (int i = 0; i < size_y; i++){
        for (int j = 0; j < size_x; j++){
            attmapa[i][j]= mapa[i][j];
        }
    }
}
void Mundo::printMundo() {
    for (int i = 0; i < size_y; i++){
        for (int j = 0; j < size_x; j++){
            cout << attmapa[i][j];
        }
        cout << endl;
    }
}

Mundo::~Mundo(){}
