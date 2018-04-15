//
// Created by User on 14/04/2018.
//

#include <cstdlib>
#include <iostream>
#include <string>
#include "Veiculo.h"
#include "Moto.h"
using namespace std;

string Moto::randomTipo(){
    int t = rand() % 9 + 1;
    if (t == 1){
        return "Esportiva";
    }
    else if (t == 2){
        return "Custom";
    }
    else if (t == 3){
        return "Trail";
    }
    else if (t == 4){
        return "Street";
    }
    else if (t == 5){
        return "CUB";
    }
    else if (t == 6){
        return "Scooter";
    }
    else if (t == 7){
        return "Lambreta";
    }
    else if (t == 8){
        return "Motoneta";
    }
    else if (t == 9){
        return "Vespa";
    }
}

Moto::Moto():
        Veiculo( 3, 3){
    setTipo();
}
void Moto::setTipo(){
    this->tipo = randomTipo();
}
string Moto::getTipo(){
    return tipo;
}

Moto::~Moto() = default;

