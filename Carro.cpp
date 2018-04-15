//
// Created by User on 14/04/2018.
//

#include <iostream>
#include "Veiculo.h"
#include "Carro.h"
using namespace std;

Carro::Carro():
        Veiculo( 2, 4){
    setPassageiros();
}
void Carro::setPassageiros(){
    this->passageiros = rand() % 4 + 1;
}
int Carro::getPassageiros(){
    return passageiros;
}
Carro::~Carro() {};
