#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
#include <time.h>

int random_int(int max, int min);
float convertir_kg(int num);
int msg_obt(int obt, int flag, int (*f)(int, int) , int max, int min);

#endif // FUNCIONES_H_INCLUDED
