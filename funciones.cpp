#include "funciones.h"
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

void cartel_obtener_comida(int comida_obtenida, string zona)
{
    cout << "-------------------------------" << endl;
    cout << "Ha buscado en la zona de: " << zona << endl;
    cout << "Usted recogio " << comida_obtenida << "kg" << endl;
    cout << "-------------------------------" << endl;
}

/// Funcion para obtener recursos
int obtenerRecursos()
{
    return random_int(20, 30);
}

void cartel_obtener_recursos(int recursos_obtenidos, string zona_recursos)
{
    cout << "--------------------------------------------------------" << endl;
    cout << "Usted consiguio " << recursos_obtenidos << " materiales en su busqueda en:" << zona_recursos << endl;
    cout << "--------------------------------------------------------" << endl;
}

void mostrar_bienvenida()
{
    cout << "|=========================================================|" << endl;
    cout << "|Bienvenido al juego de supervivencia en la selva amazonas|" << endl;
    cout << "|=========================================================|" << endl;
}

void mostrar_reglas()
{
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;
    cout << "En este juego debera sobrevivir a 3 etapas distintas" << endl;
    cout << endl;
    cout << "En la primer etapa debera armar un refugio y recolectar alimentos" << endl;
    cout << endl;
    cout << "La condiciones para avanzar a la siguiente etapa son:" << endl;
    cout << " *Consiguir el 100% del refugio" << endl;
    cout << " *Recolectar 14 kilos de comida" << endl;
    cout << "------------------------------------------------------------------" << endl;
    cout << endl;
}

void menu_principal()
{
    cout << "----------------------" << endl;
    cout << "�Desea jugar al juego? " << endl;
    cout << endl;
    cout << "1 - Iniciar juego" << endl;
    cout << "2 - Salir del juego" << endl;
    cout << "----------------------" << endl;
}

void bitacora(int dia, int comida, int refugio)
{
    cout << "====================================" << endl;
    cout << "Usted esta en el dia " << dia << endl;
    cout << endl;
    cout << "Reservas de comida restantes: " << comida << endl;
    cout << "Progreso en el armado del refugio: " << refugio << "%" << endl;
    cout << "====================================" << endl;
    cout << endl;
}

void bitacora_2(int dia, int comida, int balsa)
{
    cout << "====================================" << endl;
    cout << "Usted esta en el dia " << dia << endl;
    cout << endl;
    cout << "Reservas de comida restantes: " << comida << endl;
    cout << "Progreso en el armado de la balsa: " << balsa << "%" << endl;
    cout << "====================================" << endl;
    cout << endl;
}

void mostrar_menu_dia(int refugio)
{
    cout << "-------------------------------" << endl;
    cout << "Elija sabiamente que hacer hoy:" << endl;
    cout << "-------------------------------" << endl;
    cout << endl;
    cout << "1. Para buscar para comida" << endl;
    if (!(refugio >= 100))
    {
        cout << "2. Para buscar para recursos" << endl;
    }
    cout << endl;
}

void mostrar_menu_comida()
{
    cout << "-----------------------------------" << endl;
    cout << "Eligio comida, ahora elija donde:" << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;
    cout << "1 - Pesca en el rio" << endl;
    cout << "2 - Cosecha en la zona de arboles" << endl;
    cout << "3 - Cosecha en la zona de arbustos" << endl;
    cout << "4 - Para cambiar de opcion" << endl;
}

void mostrar_menu_comida_etapa_2()
{
    cout << "-----------------------------------" << endl;
    cout << "Eligio comida, ahora elija donde:" << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;
    cout << "1 - Pesca en el rio" << endl;
    cout << "2 - Cosecha en la zona de arboles" << endl;
    cout << "3 - Cosecha en la zona de arbustos" << endl;
    cout << "4 - Para cambiar de opcion" << endl;
    cout << endl;
}

void mostrar_zonas_recursos()
{
    cout << "------------------------------------------" << endl;
    cout << "eligio recursos, ahora elija donde buscar:" << endl;
    cout << "------------------------------------------" << endl;
    cout << endl;
    cout << "1 - Zona de arboles" << endl;
    cout << "2 - Zona de arbustos" << endl;
    cout << "3 - Zona pantano" << endl;
    cout << "4 - Monta�a" << endl;
    cout << "5 - cambiar de opcion" << endl;
}

void mostrar_balsa_armada()
{
    cout << "Ya consiguio armar la balsa ahora, debe buscar comida..." << endl;
    cout << "1. Para buscar comida" << endl;

    system("pause");
    system("cls");

    cout << "-----------------------------------" << endl;
    cout << "Eligio comida, ahora elija donde:" << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;
    cout << "1 - Pesca en el rio" << endl;
    cout << "2 - Cosecha en la zona de arboles" << endl;
    cout << "3 - Cosecha en la zona de arbustos" << endl;
    cout << "4 - Para cambiar de opcion" << endl;
    cout << endl;
}

void muerte_jugador_etapa_2()
{
    cout << "--------------------------------" << endl;
    cout << "Lo sentimos usted ha muerto..." << endl;
    cout << "Causa de la muerte: Hambruna " << endl;
    cout << "--------------------------------" << endl;
}

void mostrar_etapa_1_completada(int comida)
{
    cout << "-------------------------------------------------" << endl;
    cout << "Fin de la primera etapa..." << endl;
    cout << "Usted ha sobrevivido, avanza a la siguiente ronda" << endl;
    cout << "Comida restante: " << comida << endl;
    cout << "-------------------------------------------------" << endl;
    cout << endl;

    system("pause");
    system("cls");

    cout << "Comienzo de la segunda etapa: Seguir la corriente" << endl;
    cout << "Tiene 6 dias para construir una balsa y recolectar 12 kilos de comida" << endl;
    cout << endl;
    cout << "Valar Morghulis..." << endl;

    system("pause");
    system("cls");
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

        cartel_obtener_recursos(recursos_obtenidos, "monta�a");

        system("pause");

        break;

    default:
        break;
    }

    return recursos_obtenidos;
}
