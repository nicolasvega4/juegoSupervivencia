#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
#include <time.h>

int random_int(int max, int min);
int msg_obt(int obt, int flag, int (*f)(int, int) , int max, int min);
bool msg_ruleta(int numero);

#endif // FUNCIONES_H_INCLUDED
