#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
#include <time.h>

int random(int maximo, int minimo){
    int num = rand() % (maximo - minimo + 1);
    return num;
}

#endif // FUNCIONES_H_INCLUDED
