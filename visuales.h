#ifndef VISUALES_H_INCLUDED
#define VISUALES_H_INCLUDED
#include <iostream>
using namespace std;
#include "funciones.h"
#include <time.h>

///Inicio
void mostrar_bienvenida();
void mostrar_reglas();
void menu_principal();

void bitacora(int dia, int comida, int refugio);
void bitacora_2(int dia, int comida, int balsa);

void cartel_obtener_comida(int comida_obtenida, string zona);
void cartel_obtener_recursos(int recursos_obtenidos, string zona);

void mostrar_zonas_recursos();

void mostrar_menu_dia(int refugio);
void mostrar_menu_comida();

void mostrar_balsa_armada();
void muerte_jugador_etapa_2();
void mostrar_etapa_1_completada(int comida);
void mostrar_etapa_2_completada();

void step();



#endif
