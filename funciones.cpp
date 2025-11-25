#include "funciones.h"
#include "visuales.h"
#include "funcionesJugadores.h"
#include "funcionesRutas.h"
#include <iostream>
using namespace std;
#include <time.h>

void step()
{
    system("pause");
    system("cls");
}

/// Funcion random
int random_int(int minimo, int maximo)
{
    int num = rand() % (maximo - minimo + 1) + minimo;
    if (minimo == 0)
    {
        int num = rand() % (maximo - minimo) + minimo;
    }

    return num;
}

int refugio_tiempo()
{
    return random_int(0, 4);
}

int cantidadcomida()
{
    return random_int(7,21);
}

/// Funcion para obtener comida
int generar_comida()
{
    return random_int(2, 5);
}

/// Funcion para obtener recursos
int generar_recursos()
{
    return random_int(20, 30);
}

/*///Funcion para ruleta de comida
void ruletaComida()
{

    int ruleta = random_int(1, 3);

    if (ruleta == 2)
    {
        cout << "**************************************************************" << endl;
        cout << "GENIAL, mientras buscabas recursos encontraste comida" << endl;
        cout << "Has encontrado: " << ruleta << "kg" << endl;
        cout << "**************************************************************" << endl;
    }
}*/

int buscar_comida()
{

    mostrar_menu_comida();
    int zona_buscar_comida;
    cin >> zona_buscar_comida;

    int comida_obtenida = generar_comida();

    switch (zona_buscar_comida)
    {
    case 1:
        cartel_obtener_comida(comida_obtenida, "rio");

        system("pause");

        break;
    case 2:
        cartel_obtener_comida(comida_obtenida, "arboles");

        system("pause");

        break;
    case 3:
        cartel_obtener_comida(comida_obtenida, "arbustos");

        system("pause");

        break;
    }
    return comida_obtenida;
}

int buscar_recursos()
{

    mostrar_zonas_recursos();
    int seleccion_zona_recursos;
    cin >> seleccion_zona_recursos;

    int recursos_obtenidos = generar_recursos();
    modificar_progreso_refugio(recursos_obtenidos,jugador[]);

    switch (seleccion_zona_recursos)
    {
    case 1:
        cartel_obtener_recursos(recursos_obtenidos, "zonas de arboles");

        system("pause");

        break;
    case 2:
        cartel_obtener_recursos(recursos_obtenidos, "zona de arbustos");

        system("pause");

        break;
    case 3:
        cartel_obtener_recursos(recursos_obtenidos, "Zona pantano");

        system("pause");

        break;
    case 4:

        cartel_obtener_recursos(recursos_obtenidos, "montania");

        system("pause");

        break;

    default:
        break;
    }

    return recursos_obtenidos;
}

void inicio_etapa_3()
{
    cartel_avanza_etapa3();
    mostrar_rutas_etapa3();

    int seleccion_ruta;
    cin >> seleccion_ruta;

    int tiempo_maximo = 24;
    int tiempo_recorrido = 0;

    switch (seleccion_ruta)
    {
    case 1:

        break;
    case 2:

        break;
    case 3:

        break;
    }
}

///VECTORES -CAMBIOS A TENER EN CUENTA-
///LA CONDICION DE UN JUGADOR DESCALIFICADO ES SI TOTAL_TIEMPO() DEVUELVE 0!!

void jugadores_descalificados(int TAM, int jugador_numero[], string mensaje_calificado[])
{
    int random = random_int(0, 1);
    string mensaje_descalificado = "quedo descalificado";

    for (int i = 0; i < TAM; i++)
    {
        if (jugador_numero[i] != 0)
        {
            jugador_numero[i] = random;
        }

        if (jugador_numero[i] == 0)
        {
            mensaje_calificado[i] = mensaje_descalificado;
        }
    }
}
