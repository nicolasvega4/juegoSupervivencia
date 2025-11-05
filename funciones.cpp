#include "funciones.h"
#include <iostream>
using namespace std;
#include <time.h>

int random_int(int minimo, int maximo){
    int num = rand() % (minimo - maximo + 1) + minimo;
    return num;
}

float convertir_kg (int num){
    float resultado = num / 1000;
    return resultado;
}

int msg_obt(int obt, int flag, int (*f)(int, int), int maximo, int minimo) {
    obt = f(minimo, maximo);
    obt += flag;    
    cout << "Usted recogio: " << obt << "%" << " Ahora tiene: " << flag << "%" << " armado" << endl;
    return flag;
}