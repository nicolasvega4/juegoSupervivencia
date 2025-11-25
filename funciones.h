#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
using namespace std;
#include "funciones.h"
#include "visuales.h"

#include <time.h>

int random_int(int maximo, int minimo);
int generar_comida();
int generar_recursos();

/*void ruletaComida(int );*/
int tipo_ruta(int balsa, int comida,string tipo);
int ruta(int balsa, int comida, int recorrido);


///Vectores jugadores
void jugadores_descalificados(int TAM, int jugador_numero[], string mensaje_calificado[]);

void inicializar_jugador(int nro_participante, int jugador[]);
void modificar_puesto(int valor_puesto, int jugador[]);
void modificar_comida(int valor_comida, int jugador[]);
void modificar_tiempo(int valor_refugio, int jugador[]);

int obtener_nro_participante(int jugador[]);
int obtener_tiempo_refugio(int jugador[]);
int obtener_comida(int jugador[]);
int obtener_progreso_refugio(int jugador[]);
int obtener_progreso_balsa(int jugador[]);

void modificar_progreso_refugio(int valor_progreso_refugio, int jugador[]);
void modificar_progreso_balsa(int valor_progreso_balsa, int jugador[]);


int refugio_tiempo();
int cantidadcomida();

int ruleta();

int buscar_comida();
int buscar_recursos();

int tiempo_base_ruta();
int atraso_tiempo();
int mejora_tiempo();

void inicio_etapa_3();///Engloba toda la etapa 3, no esta hecho aun

#endif // FUNCIONES_H_INCLUDED
