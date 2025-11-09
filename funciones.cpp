#include "funciones.h"
#include <iostream>
using namespace std;
#include <time.h>

int random_int(int minimo, int maximo){
    int num = rand() % (minimo - maximo + 1) + minimo;
    return num;
}

bool msg_ruleta(int numero) {
    if (numero == 2) return true;
}

int msg_obt(int obt, int flag, int (*f)(int, int), int maximo, int minimo) {
    obt = f(minimo, maximo);
    obt += flag;    
    cout << "Usted recogio: " << obt << "%" << " Ahora tiene: " << flag << "%" << " armado" << endl;
    return flag;
}