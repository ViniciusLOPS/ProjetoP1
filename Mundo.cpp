//
// Created by User on 14/04/2018.
//

#include <iostream>
#include "Mundo.h"
#include "Moto.h"
#include "Carro.h"
#include "Caminhao.h"
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
void Mundo::attMapa(){
    for (int i = 0; i < size_y; i++){
        for (int j = 0; j < size_x; j++){
            attmapa[i][j]= mapa[i][j];
        }
    }
}
/*void Mundo::attMundo(vector<Caminhao*> caminhoes, vector<Carro*> carros, vector<Moto*> motos){
    attMapa();

}*/
void Mundo::printMundo() {
    for (int i = 0; i < size_y; i++){
        for (int j = 0; j < size_x; j++){
            if (attmapa[i][j] == 0){
                cout << "\033[7;37m \033[0m";
            }
            else if (attmapa[i][j] == 1){
                cout << "\033[7;30m \033[0m";
            }
            else if (attmapa[i][j] == 2){
                cout << "\033[7;35m \033[0m";
            }
            else if (attmapa[i][j] == 3){
                cout << "\033[7;32m \033[0m";
            }
            else if (attmapa[i][j] == 4){
                cout << "\033[7;34m \033[0m";
            }
            else if (attmapa[i][j] == 5){
                cout << "\033[7;31m \033[0m";
            }
        }
        cout << endl;
    }
}

Mundo::~Mundo(){}
