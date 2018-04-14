#include <iostream>
#include <vector>
#include <random>
#include "Mundo.h"
#include "Veiculo.h"
using namespace std;

int main() {

    Mundo *m = new Mundo();
    Veiculo *v = new Veiculo(1, 5);

    //testes
    m->printMundo();
    cout << v->getX() << "" << v->getY() << "" << v->getFabrica() << "" << v->getSpeed() << "" << v->getCor();

    return 0;
}