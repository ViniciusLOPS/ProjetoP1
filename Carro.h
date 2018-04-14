//
// Created by User on 14/04/2018.
//

#ifndef UNTITLED_CARRO_H
#define UNTITLED_CARRO_H


#include <iostream>
#include "Veiculo.h"
using namespace std;

class Carro : public Veiculo{
protected:
    int passageiros; // 1 a 4
public:
    Carro();
    void setPassageiros();
    int getPassageiros();
    ~Carro();
};


#endif //UNTITLED_CARRO_H
