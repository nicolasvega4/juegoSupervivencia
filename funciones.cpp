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

int ruleta()
{
    int chance = random_int(1, 100);
    return chance;
}

int tipo_ruta(int balsa, int comida, string tipo)
{
    int resultado_final;

    if (tipo == "pantano")
    {
        resultado_final = ruta(balsa, comida, 48);
    }
    else if (tipo == "rapido")
    {
        resultado_final = ruta(balsa, comida, 12);
    }
    else
    {
        resultado_final = ruta(balsa, comida, 24);
    }

    return resultado_final;
}

int ruta(int balsa, int comida, int recorrido) {
    int resultado_final = 0;
    int tiempo_maximo = 24;
    int acc_recorrido = 0;
    int tiempo_recorrido = 0;

    while (tiempo_recorrido < tiempo_maximo)
    {
        int sumar = random_int(3, 4);
        acc_recorrido += sumar;
    }

    if (acc_recorrido >= recorrido)
    {
        resultado_final = 1;
    }

    return resultado_final;
}
