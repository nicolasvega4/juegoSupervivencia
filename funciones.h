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
void mostrar_balsa_armada();
void muerte_jugador_etapa_2();
void mostrar_etapa_1_completada(int comida);
void mostrar_bienvenida();
void mostrar_reglas();
void menu_principal();
void mostrar_etapada_2_completada();
void step();
void bitacora(int dia, int comida, int refugio);
void bitacora_2(int dia, int comida, int balsa);
void mostrar_menu_dia(int refugio);
void mostrar_menu_comida();
void mostrar_menu_comida_etapa_2();
int buscar_comida();
int buscar_recursos();

#endif // FUNCIONES_H_INCLUDED
