#include <iostream>
#include <vector>
#include "Mundo.h"
#include "Veiculo.h"
#include "Caminhao.h"
#include "Carro.h"
#include "Moto.h"
using namespace std;

int main() {

    Mundo *m = new Mundo();
    Veiculo *v = new Veiculo(1, 5);
    vector<Caminhao*> caminhoes;
    vector<Carro*> carros;
    vector<Moto*> motos;
    for (int i = 0; i < 10 ; i++){
        caminhoes.push_back(new Caminhao());
    }
    for (int i = 0; i < 10 ; i++){
        carros.push_back(new Carro());
    }
    for (int i = 0; i < 10 ; i++){
        motos.push_back(new Moto());
    }

    //testes
    m->printMundo();
    cout << v->getX() << "" << v->getY() << "" << v->getFabrica() << "" << v->getSpeed() << "" << v->getCor() << endl;
    cout << caminhoes[0]->getX() << "" << caminhoes[0]->getY() << "" << caminhoes[0]->getFabrica() << "" << caminhoes[0]->getSpeed() << "" << caminhoes[0]->getCor() << "" << caminhoes[0]->getCarga() << endl;
    cout << carros[0]->getX() << "" << carros[0]->getY() << "" << carros[0]->getFabrica() << "" << carros[0]->getSpeed() << "" << carros[0]->getCor() << "" << carros[0]->getPassageiros() << endl;
    cout << motos[0]->getX() << "" << motos[0]->getY() << "" << motos[0]->getFabrica() << "" << motos[0]->getSpeed() << "" << motos[0]->getCor() << "" << motos[0]->getTipo() << endl;


    return 0;
}