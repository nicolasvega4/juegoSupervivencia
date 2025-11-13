#include "funciones.h"
#include <iostream>
using namespace std;
#include <time.h>

int random_int(int minimo, int maximo)
{
    int num = rand() % (maximo - minimo + 1) + minimo;
    return num;
}

bool msg_ruleta(int numero)
{
    bool flag = false;
    if (numero == 2)
    {
        flag = true;
    }
    return flag;
}

void obtenerComida(int &comida)
{
    int obt_comida = random_int(2, 5);
    comida += obt_comida;
    cout << "-------------------------------" << endl;
    cout << "Usted recogio:" << obt_comida << "kg" << " Ahora tiene:" << comida << " kg" << endl;
    cout << "-------------------------------" << endl;

    system("pause");
    system("cls");
}

bool obtenerRecursos(int &recursos)
{
    int ruleta = random_int(1, 3);
    int obt_refugio = random_int(20, 30);
    int ruleta_chance = msg_ruleta(ruleta);
    recursos += obt_refugio;
    cout << "Usted recogio: " << obt_refugio << "%" << " Ahora tiene: " << recursos << "%" << endl;
    return ruleta_chance;

    system("pause");
    system("cls");
}
