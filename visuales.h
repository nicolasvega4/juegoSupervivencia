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

///Bitacora
void bitacora(int dia, int comida, int refugio);
void bitacora_2(int dia, int comida, int balsa);

///Carteles recursos y comida
void cartel_obtener_comida(int comida_obtenida, string zona);
void cartel_obtener_recursos(int recursos_obtenidos, string zona);

void mostrar_zonas_recursos();
void mostrar_menu_comida();

void mostrar_menu_diario(int refugio);

void mostrar_balsa_armada();
void muerte_jugador_etapa_1y2();
void cartel_avanza_etapa2(int comida);

///Etapa 3
void cartel_avanza_etapa3();
void mostrar_rutas_etapa3();
void cartel_eligio_ruta(string ruta, string amenaza);
void mostrar_navio_exitoso();
void mostrar_navio_fracaso();

void step();



#endif
