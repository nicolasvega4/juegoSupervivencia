#include "funciones.h"
#include <iostream>
#include <time.h>

int random_int(int maximo, int minimo){
    int num = rand() % (maximo - minimo + 1);
    return num;
}