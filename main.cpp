#include <iostream>
#include <vector>
#include "Mundo.h"
#include "Caminhao.h"
#include "Carro.h"
#include "Moto.h"
using namespace std;

int main() {

    Mundo *m = new Mundo();
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
    /*while(caminhoes.size() != 0 && carros.size() !=0 || caminhoes.size() != 0 && motos.size() !=0 ||
          carros.size() != 0 && motos.size() !=0 ){
        m->attMundo(caminhoes, carros, motos);
    }*/
    m->attMundo(caminhoes, carros, motos);
    caminhoes.clear();
    carros.clear();
    motos.clear();


    return 0;
}