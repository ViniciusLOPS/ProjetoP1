#include <iostream>
#include <vector>
#include "Mundo.h"
#include "Caminhao.h"
#include "Carro.h"
#include "Moto.h"
using namespace std;

int main() {

    auto *m = new Mundo();
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
    while(!caminhoes.empty() && !carros.empty() || !caminhoes.empty() && !motos.empty() ||
            !carros.empty() && !motos.empty()){
        m->attMundo(caminhoes, carros, motos);
        m->moveAll(caminhoes, carros, motos);
    }
    caminhoes.clear();
    carros.clear();
    motos.clear();


    return 0;
}