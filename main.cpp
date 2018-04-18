#include <iostream>
#include <vector>
#include <windows.h>
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
        carros.push_back(new Carro());
        motos.push_back(new Moto());
    }

    //testes
    while(!caminhoes.empty() && !carros.empty() || !caminhoes.empty() && !motos.empty() ||
            !carros.empty() && !motos.empty()){
        m->attMundo(&caminhoes, &carros, &motos);
        Sleep(300);
    }
    caminhoes.clear();
    carros.clear();
    motos.clear();


    return 0;
}