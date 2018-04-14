//
// Created by User on 14/04/2018.
//

#ifndef UNTITLED_VEICULO_H
#define UNTITLED_VEICULO_H
#include <iostream>
#include <string>
#include <random>
using namespace std;
class Veiculo {
protected:
    int x;
    int y;
    int speed;
    string fabrica;
    int cor;

public:
    Veiculo();
    Veiculo(int speed, int cor);
    void setX();
    void setY();
    void setFabrica();
    void setSpeed(int speed);
    void setCor(int cor);
    int getX();
    int getY();
    string getFabrica();
    int getSpeed();
    int getCor();
    /*void move();
    void moveCima();
    void moveBaixo();
    void moveEsquerda();
    void moveDireita();*/
    ~Veiculo();
};


#endif //UNTITLED_VEICULO_H
