#include <iostream>
#include <vector>
#include "Mundo.h"
#include "Veiculo.h"
#include "Caminhao.h"
using namespace std;

int main() {

    Mundo *m = new Mundo();
    Veiculo *v = new Veiculo(1, 5);
    vector<Caminhao*> c;
    c.push_back(new Caminhao());
    c.push_back(new Caminhao());

    //testes
    m->printMundo();
    cout << v->getX() << "" << v->getY() << "" << v->getFabrica() << "" << v->getSpeed() << "" << v->getCor();
    cout << c[0]->getX() << "" << c[0]->getY() << "" << c[0]->getFabrica() << "" << c[0]->getSpeed() << "" << c[0]->getCor() << "" << c[0]->getCarga();
    cout << c[1]->getX() << "" << c[1]->getY() << "" << c[1]->getFabrica() << "" << c[1]->getSpeed() << "" << c[1]->getCor() << "" << c[1]->getCarga();


    return 0;
}