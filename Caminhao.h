//
// Created by User on 14/04/2018.
//

#ifndef UNTITLED_CAMINHAO_H
#define UNTITLED_CAMINHAO_H

#include <iostream>
#include "Veiculo.h"

using namespace std;

class Caminhao : public Veiculo{
protected:
    int carga; //1 a 14
public:
    Caminhao();
    void setCarga();
    int getCarga();
    ~Caminhao();
};


#endif //UNTITLED_CAMINHAO_H
