#include <iostream>
#include <vector>
#include <random>
#include "Mundo.h"
#include "Veiculo.h"
#include "Caminhao.h"
using namespace std;

int main() {

    Mundo *m = new Mundo();
    Veiculo *v = new Veiculo(1, 5);
    Caminhao *c1= new Caminhao();

    //testes
    m->printMundo();
    cout << v->getX() << "" << v->getY() << "" << v->getFabrica() << "" << v->getSpeed() << "" << v->getCor();
    cout << c1->getX() << "" << c1->getY() << "" << c1->getFabrica() << "" << c1->getSpeed() << "" << c1->getCor() << "" << c1->getCarga();

    return 0;
}