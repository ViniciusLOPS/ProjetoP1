#include <iostream>
#include <vector>
#include <random>
#include "Mundo.h"
using namespace std;

int main() {

    Mundo *m = new Mundo();


    //testes
    m->printMundo();
    delete[](m);
    return 0;
}