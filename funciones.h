#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
using namespace std;
#include "funciones.h"
#include <time.h>

int random_int(int maximo, int minimo);
int obtenerComida();
int obtenerRecursos();
/*void ruletaComida(int );*/
void cartel_obtener_comida(int comida_obtenida, string zona);
void cartel_obtener_recursos(int recursos_obtenidos);
void mostrar_bienvenida();
void mostrar_reglas();
void menu_principal();
void step();
void bitacora(int dia, int comida, int refugio);
void mostrar_menu_dia(int refugio);
void mostrar_menu_comida();
int buscar_comida();
int buscar_recursos();

#endif // FUNCIONES_H_INCLUDED
