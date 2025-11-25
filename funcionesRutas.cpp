#include "funciones.h"
#include "visuales.h"
#include "funcionesJugadores.h"
#include "funcionesRutas.h"
#include <iostream>
using namespace std;
#include <time.h>

/// EN ESTE ARCHIVO ESTAN LAS FUNCIONES QUE SE UTILIZAN PARA LA ETAPA 3 Y LAS RUTAS

/// ETAPA 3 RUTAS

/// Tiempo base que lleva la ruta
int tiempo_base_ruta()
{
    return random_int(15, 25);
}

/// Probabilidad del 50% en atrasarse X cantidad de horas
int ruleta_atraso()
{
    int chance = random_int(1, 100);
    if (chance > 50)
    {
        return random_int(3, 8);
    }
    else
    {
        return 0;
    }
}

/// Probabilidad del 50% en recuperar X cantidad de horas
int ruleta_avance()
{
    int chance = random_int(1, 100);
    if (chance > 50)
    {
        return random_int(3, 7);
    }
    else
    {
        return 0;
    }
}

/// Horas en llegar a destino
int total_tiempo()
{
    int tiempo_avance = ruleta_avance();
    int tiempo_atraso = ruleta_atraso();
    int tiempo_recorrido = tiempo_base_ruta() + tiempo_atraso - tiempo_avance;

    if (tiempo_recorrido <= 24)
    {
        return tiempo_recorrido;
    }
    return 0;
}
