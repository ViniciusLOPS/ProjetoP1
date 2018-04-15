//
// Created by User on 14/04/2018.
//

#include <iostream>
#include "Caminhao.h"
using namespace std;

Caminhao::Caminhao():
        Veiculo(1, 5){
    setCarga();
}
void Caminhao::setCarga(){
    this->carga = rand() % 14 + 1;
}
int Caminhao::getCarga(){
    return carga;
}

Caminhao::~Caminhao() {};