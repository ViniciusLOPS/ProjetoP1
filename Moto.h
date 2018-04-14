//
// Created by User on 14/04/2018.
//

#ifndef UNTITLED_MOTO_H
#define UNTITLED_MOTO_H

#include <iostream>
#include <string>
#include "Veiculo.h"
using namespace std;

class Moto : public Veiculo{
protected:
    string tipo; //Esportiva, Custom, Trail, Street, CUB, Scooter, lambreta, motoneta e vespa
public:
    Moto();
    string randomTipo();
    void setTipo();
    string getTipo();
    ~Moto();
};

#endif //UNTITLED_MOTO_H
