#include "funciones.h"
#include <iostream>
#include <time.h>

int random_int(int minimo, int maximo){
    int num = rand() % (minimo - maximo + 1) + minimo;
    return num;
}