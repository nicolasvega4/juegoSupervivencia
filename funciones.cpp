#include "funciones.h"
#include "visuales.h"
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
    return num;
}

/// Funcion para obtener comida
int obtenerComida()
{
    return random_int(2, 5);
}

/// Funcion para obtener recursos
int obtenerRecursos()
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

    int comida_obtenida = obtenerComida();

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

    int recursos_obtenidos = obtenerRecursos();

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

///ETAPA 3 RUTAS

///Tiempo base que lleva la ruta
int tiempo_base_ruta()
{
    return random_int(15,25);
}

///Probabilidad del 50% en atrasarse X cantidad de horas
int ruleta_atraso()
{
    int chance = random_int(1, 100);
    if(chance>50)
    {
        return random_int(3,8);
    }
    else
    {
        return 0;
    }
}

///Probabilidad del 50% en recuperar X cantidad de horas
int ruleta_avance()
{
    int chance = random_int(1, 100);
    if(chance>50)
    {
        return random_int(3,7);
    }
    else
    {
        return 0;
    }
}

///Horas en llegar a destino
int total_tiempo()
{
    int tiempo_avance = ruleta_avance();
    int tiempo_atraso = ruleta_atraso();
    int tiempo_recorrido = tiempo_base_ruta() + tiempo_atraso - tiempo_avance;

    if(tiempo_recorrido<24)
    {
        return tiempo_recorrido;
    }
    else
    {
        return 0;
    }
}


void inicio_etapa_3()
{
    cartel_avanza_etapa3();
    mostrar_rutas_etapa3();

    int seleccion_ruta;
    cin >> seleccion_ruta;

    int tiempo_maximo = 24;
    int tiempo_recorrido = 0;
    int kilometros_recorridos = 0;

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
