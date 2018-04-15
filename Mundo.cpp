//
// Created by User on 14/04/2018.
//

#include <iostream>
#include <vector>
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
void Mundo::attMundo(vector<Caminhao*> caminhoes, vector<Carro*> carros, vector<Moto*> motos){
    attMapa();
    int x, y;
    for (int i = 0; i < motos.size(); i++){
        x = motos[i]->getX();
        y = motos[i]->getY();
        if (attmapa[y][x] == 0 || attmapa[y][x] == 1){
            motos[i]->setFabrica("false");
            attmapa[y][x] = motos[i]->getCor();
        }
        else if (attmapa[y][x] == 2 ){
            motos[i]->setFabrica("true");
            motos.push_back(new Moto());
        }
        else if (attmapa[y][x] == 3){
            for (int j = 0; j < i; j++){
                if( x == motos[j]->getX() && y == motos[j]->getY()){
                    motos.erase(motos.begin() + j);
                    break;
                }
            }
            i--;
            motos.erase(motos.begin() + i);
            i--;
        }
    }
    for (int i = 0; i < carros.size(); i++){
        x = carros[i]->getX();
        y = carros[i]->getY();
        if (attmapa[y][x] == 0 || attmapa[y][x] == 1){
            carros[i]->setFabrica("false");
            attmapa[y][x] = carros[i]->getCor();
        }
        else if (attmapa[y][x] == 2 ){
            carros[i]->setFabrica("true");
            carros.push_back(new Carro());
        }
        else if (attmapa[y][x] == 3){
            for (int j = 0; j < motos.size(); j++){
                if( x == motos[j]->getX() && y == motos[j]->getY()){
                    motos.erase(motos.begin() + j);
                    break;
                }
            }
        }
        else if (attmapa[y][x] == 4){
            for (int j = 0; j < i; j++){
                if( x == carros[j]->getX() && y == carros[j]->getY()){
                    carros.erase(carros.begin() + j);
                    break;
                }
            }
        }
        i--;
        carros.erase(carros.begin() + i);
        i--;
    }
    for (int i = 0; i < caminhoes.size(); i++){
        x = caminhoes[i]->getX();
        y = caminhoes[i]->getY();
        if (attmapa[y][x] == 0 || attmapa[y][x] == 1){
            caminhoes[i]->setFabrica("false");
            attmapa[y][x] = caminhoes[i]->getCor();
        }
        else if (attmapa[y][x] == 2 ){
            caminhoes[i]->setFabrica("true");
            caminhoes.push_back(new Caminhao);
        }
        else if (attmapa[y][x] == 3){
            for (int j = 0; j < motos.size(); j++){
                if( x == motos[j]->getX() && y == motos[j]->getY()){
                    motos.erase(motos.begin() + j);
                    break;
                }
            }
        }
        else if (attmapa[y][x] == 4){
            for (int j = 0; j < carros.size(); j++){
                if( x == carros[j]->getX() && y == carros[j]->getY()){
                    carros.erase(carros.begin() + j);
                    break;
                }
            }
        }
        else if (attmapa[y][x] == 5){
            for (int j = 0; j < i; j++){
                if( x == caminhoes[j]->getX() && y == caminhoes[j]->getY()){
                    caminhoes.erase(caminhoes.begin() + j);
                    break;
                }
            }
        }
        i--;
        caminhoes.erase(caminhoes.begin() + i);
        i--;
    }
    printMundo();
}
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
