//
// Created by User on 14/04/2018.
//
#include <cstdlib>
#include <iostream>
#include <string>
#include "Veiculo.h"
using namespace std;

Veiculo::Veiculo() = default;
Veiculo::Veiculo(int speed, int cor){
    setX();
    setY();
    setFabrica("false");
    setSpeed(speed);
    setCor(cor);
}
void Veiculo::setX(){
    this->x = rand() % 60;
}
void Veiculo::setY(){
    this->y = rand() % 30;
}
void Veiculo::setFabrica(string fabrica){
    this->fabrica = fabrica;
}
void Veiculo::setSpeed(int speed){
    this->speed = speed;
}
void Veiculo::setCor(int cor){
    this->cor = cor;
}
int Veiculo::getX() {
    return x;
}
int Veiculo::getY() {
    return y;
}
string Veiculo::getFabrica() {
    return fabrica;
}
int Veiculo::getSpeed(){
    return speed;
}
int Veiculo::getCor() {
    return cor;
}
void Veiculo::move(){
    int m = rand() % 4 + 1;
    if (m == 1){
        moveCima();
    }
    if (m == 2){
        moveBaixo();
    }
    if (m == 3){
        moveEsquerda();
    }
    if (m == 4){
        moveDireita();
    }
}
void Veiculo::moveCima() {
    y -= speed;
    if (y < 0){
        y = 30 + y;
    }
}
void Veiculo::moveBaixo() {
    y += speed;
    if (y > 29){
        y = y - 30;
    }
}
void Veiculo::moveEsquerda() {
    x -= speed;
    if (x > 59){
        x = x - 60;
    }
}
void Veiculo::moveDireita() {
    x += speed;
    if (x > 59){
        x = 60 + x;
    }
}

Veiculo::~Veiculo() = default;