#include "funciones.h"
#include "visuales.h"
#include "funcionesJugadores.h"
#include "funcionesRutas.h"
#include <iostream>
using namespace std;
#include <time.h>

/// EN ESTE ARCHIVO ESTAN LAS FUNCIONES QUE INTERACTUAN CON LOS JUGADORES Y SUS VECTORES

///*Funcion para crear jugadores
/// Los jugadores van a tener:
///-numero de jugador(1)    [0]
///-tiempo de refugio(dias) [1]
///-cantidad de comida      [2]
///-puesto                  [3]
///-progreso en armado      [4]

///*Llamado a la funcion, recibiran variables int que alojan un numero random
/// EJ: kg_comida = random_int(7,21)

void inicializar_jugador(int nro_participante, int jugador[])
{
    jugador[0] = nro_participante;
    jugador[1] = 0; ///Tiempo Refugio
    jugador[2] = 0; ///Comida
    jugador[3] = 0; ///Puesto
    jugador[4] = 0; ///Progreso armado refugio
    jugador[5] = 0; ///Progreso armado balsa
}

int obtener_nro_participante(int jugador[])
{
    return jugador[0];
}

///Accede a la posicion para ver el tiempo del refugio
int obtener_tiempo_refugio(int jugador[])
{
    return jugador[1];
}

///Accede a la posicion para ver la comida
int obtener_comida(int jugador[])
{
    return jugador[2];
}

///Accede a la posicion para ver progreso en el armado del refugio
int obtener_progreso_refugio(int jugador[])
{
    return jugador[4];
}

///Accede a la posicion para ver progreso en el armado de la balsa
int obtener_progreso_balsa(int jugador[])
{
    return jugador[5];
}

///Funciones para modificar valores del vector
void modificar_tiempo(int valor_refugio, int jugador[])
{
    jugador [1] = valor_refugio;
}

void modificar_comida(int valor_comida, int jugador[])
{
    jugador [2] = valor_comida;
}

void modificar_puesto(int valor_puesto, int jugador[])
{
    jugador [3] = valor_puesto;
}

///funcion que toma como parametro generar_comida y lo suman al progreso en la posicion de refugio
void modificar_progreso_refugio(int valor_progreso_refugio, int jugador[])
{
    jugador [4] = jugador[4] + valor_progreso_refugio;
}

///funcion que toma como parametro generar_comida y lo suman al progreso en la posicion de balsa
void modificar_progreso_balsa(int valor_progreso_balsa, int jugador[])
{
    jugador [5] = jugador[5] + valor_progreso_balsa;
}
