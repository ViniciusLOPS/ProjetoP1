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
void Mundo::attMundo(vector<Caminhao*> *caminhoes, vector<Carro*> *carros, vector<Moto*> *motos){
    attMapa();
    int x, y;
    for (int i = 0; i < motos->size(); i++){
        x = motos->operator[](i)->getX();
        y = motos->operator[](i)->getY();
        if (attmapa[y][x] == 0 || attmapa[y][x] == 1){
            motos->operator[](i)->setFabrica("false");
            attmapa[y][x] = motos->operator[](i)->getCor();
        }
        else if (attmapa[y][x] == 2 ){
            if(motos->operator[](i)->getFabrica() == "false"){
                motos->operator[](i)->setFabrica("true");
                motos->push_back(new Moto());
            }
            attmapa[y][x] = motos->operator[](i)->getCor();
        }
        else if (attmapa[y][x] == 3){
            for (int j = 0; j < i; j++){
                if( x == motos->operator[](j)->getX() && y == motos->operator[](j)->getY()){
                    motos->erase(motos->begin() + j);
                    break;
                }
            }
            i--;
            motos->erase(motos->begin() + i);
            i--;
            attmapa[y][x] = mapa[y][x];
        }
    }
    for (int i = 0; i < carros->size(); i++){
        x = carros->operator[](i)->getX();
        y = carros->operator[](i)->getY();
        if (attmapa[y][x] == 0 || attmapa[y][x] == 1){
            carros->operator[](i)->setFabrica("false");
            attmapa[y][x] = carros->operator[](i)->getCor();
        }
        else if (attmapa[y][x] == 2 ){
            if(motos->operator[](i)->getFabrica() == "false"){
                carros->operator[](i)->setFabrica("true");
                carros->push_back(new Carro());
            }
            attmapa[y][x] = carros->operator[](i)->getCor();
        }
        else if (attmapa[y][x] == 3){
            for (int j = 0; j < motos->size(); j++){
                if( x == motos->operator[](j)->getX() && y == motos->operator[](j)->getY()){
                    motos->erase(motos->begin() + j);
                    break;
                }
            }
            attmapa[y][x] = carros->operator[](i)->getCor();
        }
        else if (attmapa[y][x] == 4){
            for (int j = 0; j < i; j++){
                if( x == carros->operator[](j)->getX() && y == carros->operator[](j)->getY()){
                    carros->erase(carros->begin() + j);
                    break;
                }
            }
            i--;
            carros->erase(carros->begin() + i);
            i--;
            attmapa[y][x] = mapa[y][x];
        }

    }
    for (int i = 0; i < caminhoes->size(); i++){
        x = caminhoes->operator[](i)->getX();
        y = caminhoes->operator[](i)->getY();
        if (attmapa[y][x] == 0 || attmapa[y][x] == 1){
            caminhoes->operator[](i)->setFabrica("false");
            attmapa[y][x] = caminhoes->operator[](i)->getCor();
        }
        else if (attmapa[y][x] == 2 ){
            if(motos->operator[](i)->getFabrica() == "false"){
                caminhoes->operator[](i)->setFabrica("true");
                caminhoes->push_back(new Caminhao);
            }
            attmapa[y][x] = caminhoes->operator[](i)->getCor();
        }
        else if (attmapa[y][x] == 3){
            for (int j = 0; j < motos->size(); j++){
                if( x == motos->operator[](j)->getX() && y == motos->operator[](j)->getY()){
                    motos->erase(motos->begin() + j);
                    break;
                }
            }
            attmapa[y][x] = caminhoes->operator[](i)->getCor();
        }
        else if (attmapa[y][x] == 4){
            for (int j = 0; j < carros->size(); j++){
                if( x == carros->operator[](j)->getX() && y == carros->operator[](j)->getY()){
                    carros->erase(carros->begin() + j);
                    break;
                }
            }
            attmapa[y][x] = caminhoes->operator[](i)->getCor();
        }
        else if (attmapa[y][x] == 5){
            for (int j = 0; j < i; j++){
                if( x == caminhoes->operator[](j)->getX() && y == caminhoes->operator[](j)->getY()){
                    caminhoes->erase(caminhoes->begin() + j);
                    break;
                }
            }
            i--;
            caminhoes->erase(caminhoes->begin() + i);
            i--;
            attmapa[y][x] = mapa[y][x];
        }

    }
    cout << "\033[2;31m Caminhoes: \033[0m" << caminhoes->size() << "\033[2;34m Carros: \033[0m" << carros->size()
         << "\033[2;32m Motos: \033[0m" << motos->size() << endl;
    printMundo();
    moveAll(*caminhoes, *carros, *motos);
}
void Mundo::moveAll(vector<Caminhao*> caminhoes, vector<Carro*> carros, vector<Moto*> motos){
    for (auto &caminhoe : caminhoes) {
        caminhoe->move();
    }
    for (auto &carro : carros) {
        carro->move();
    }
    for (auto &moto : motos) {
        moto->move();
    }
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

Mundo::~Mundo() = default;
