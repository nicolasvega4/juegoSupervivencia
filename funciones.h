#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
using namespace std;
#include "funciones.h"
#include "visuales.h"
#include <time.h>

int random_int(int maximo, int minimo);
int obtenerComida();
int obtenerRecursos();

/*void ruletaComida(int );*/
int tipo_ruta(int balsa, int comida,string tipo);
int ruta(int balsa, int comida, int recorrido);

int ruleta();

int buscar_comida();
int buscar_recursos();

int tiempo_base_ruta();
int atraso_tiempo();
int mejora_tiempo();

void inicio_etapa_3();///Engloba toda la etapa 3, no esta hecho aun

#endif // FUNCIONES_H_INCLUDED
