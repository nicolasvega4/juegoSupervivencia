#include <iostream>
using namespace std;
#include "funciones.h"
#include <time.h>

int main()
{

    /// Declaracion de variables
    int refugio = 0;
    int comida = 0;
    int balsa = 0;
    bool ruleta_chance = false;

    srand(time(NULL));
    int condicion = 1;
    string ultimoDia = "Usted esta en el ultimo dia";

    do
    {
        int opcion;
        cout << "|=========================================================|" << endl;
        cout << "|Bienvenido al juego de supervivencia en la selva amazonas|" << endl;
        cout << "|=========================================================|" << endl;

        system("pause");
        system("cls");

        cout << endl;
        cout << "------------------------------------------------------------------" << endl;
        cout << "En este juego debera sobrevivir a 3 etapas distintas" << endl;
        cout << endl;
        cout << "En la primer etapa debera armar un refugio y recolectar alimentos" << endl;
        cout << endl;
        cout << "La condiciones para avanzar a la siguiente etapa son:" <<endl;
        cout << " *Consiguir el 100% del refugio" << endl;
        cout << " *Recolectar 14 kilos de comida" << endl;
        cout << "------------------------------------------------------------------" << endl;
        cout << endl;

        system("pause");
        system("cls");

        cout << "----------------------" << endl;
        cout << "¿Desea jugar al juego? " << endl;
        cout << endl;
        cout << "1 - Iniciar juego" << endl;
        cout << "2 - Salir del juego" << endl;
        cout << "----------------------" << endl;

        cin >> opcion;

        cout << "Valar Dohaeris..." << endl;

        system("pause");
        system("cls");

        if (opcion == 1)
        {

            /// INICIO DE LA ETAPA NRO 1 (REFUGIO)

            cout << "Etapa 1, armar un refugio" << endl;
            for (int i = 1; i <= 7; i++)
            {

                cout << "---------------------"<<endl;
                cout << "Esta en el dia: " << i << endl;
                cout << "---------------------"<<endl;
                if (i == 7)
                {
                    cout << ultimoDia << endl;
                }

                cout << "-------------------------------" << endl;
                cout << "Elija sabiamente que hacer hoy:" << endl;
                cout << "-------------------------------" << endl;
                cout << endl;
                cout << "1. Para buscar para comida" << endl;
                cout << "2. Para buscar para recursos" << endl;

                cout << endl;

                int respuesta;
                cin >> respuesta;

                system("pause");
                system("cls");

                switch (respuesta)
                {
                /// SELECCIONA COMIDA
                case 1:
                    cout << "-----------------------------------" << endl;
                    cout << "Eligio comida, ahora elija donde:" << endl;
                    cout << "-----------------------------------" << endl;
                    cout << endl;
                    cout << "1 - Pesca en el rio" << endl;
                    cout << "2 - Cosecha en la zona de arboles" << endl;
                    cout << "3 - Cosecha en la zona de arbustos" << endl;
                    cout << "4 - Para cambiar de opcion" << endl;
                    cin >> opcion;

                    switch (opcion)
                    {
                    case 1:
                        obtenerComida(comida);

                        system("pause");
                        system("cls");

                        break;
                    case 2:
                        obtenerComida(comida);

                        system("pause");
                        system("cls");

                        break;
                    case 3:
                        obtenerComida(comida);

                        system("pause");
                        system("cls");

                        break;

                    default:
                        i--;
                        break;
                    }

                    break;

                /// SELECCIONA RECURSOS

                case 2:

                    if ((refugio >= 100) && (respuesta == 2))
                    {
                        refugio = 100;
                        cout << "Usted ya ha alcanzado el maximo de recursos porfavor escoja otra opcion." << endl;
                        i--;
                    }
                    else
                    {
                        cout << "------------------------------------------" << endl;
                        cout << "Eligio recursos, ahora elija donde buscar:" << endl;
                        cout << "------------------------------------------" << endl;
                        cout << endl;
                        cout << "1 - Rama de arboles" << endl;
                        cout << "2 - Ramas de arbustos" << endl;
                        cout << "3 - Barro" << endl;
                        cout << "4 - Rocas" << endl;
                        cout << "5 - Cambiar de opcion" << endl;
                        int opcion;
                        cin >> opcion;

                        switch (opcion)
                        {
                        case 1:

                            ruleta_chance = obtenerRecursos(refugio);

                            if (ruleta_chance == true)
                            {
                                cout << endl;
                                cout << "********************************************************************************" << endl;
                                cout << "Felicidades en su trayecto a recoger recursos usted encontro comida ahora tiene: " << endl;
                                cout << "********************************************************************************" << endl;
                                cout << endl;
                                obtenerComida(comida);
                            }

                            system("pause");
                            system("cls");

                            break;
                        case 2:
                            obtenerRecursos(refugio);

                            if (ruleta_chance == true)
                            {
                                cout << endl;
                                cout << "**********************************************************************************" << endl;
                                cout << "Felicidades en su trayecto a recoger recursos usted encontro comida ahora tiene: " << endl;
                                cout << "***********************************************************************************" << endl;
                                cout << endl;
                                obtenerRecursos(comida);
                            }

                            system("pause");
                            system("cls");

                            break;
                        case 3:
                            obtenerRecursos(refugio);

                            if (ruleta_chance == true)
                            {
                                cout << endl;
                                cout << "********************************************************************************" << endl;
                                cout << "Felicidades en su trayecto a recoger recursos usted encontro comida ahora tiene: " << endl;
                                cout << "********************************************************************************" << endl;
                                cout << endl;
                                obtenerComida(comida);
                            }

                            system("pause");
                            system("cls");

                            break;
                        case 4:
                            obtenerRecursos(refugio);

                            if (ruleta_chance == true)
                            {
                                cout << endl;
                                cout << "********************************************************************************" << endl;
                                cout << "Felicidades en su trayecto a recoger recursos usted encontro comida ahora tiene: " << endl;
                                cout << "********************************************************************************" << endl;
                                cout << endl;
                                obtenerComida(comida);
                            }

                            system("pause");
                            system("cls");

                            break;

                        default:
                            i--;
                            break;
                        }
                        break;

                    default:

                        system("pause");
                        system("cls");

                        break;
                    }
                }
            }

            system("pause");
            system("cls");

            /// MUERTE DE JUGADOR - DESCALIFICADO
            if (comida < 14 || refugio < 100)
            {
                cout << "--------------------------------" << endl;
                cout << "Lo sentimos usted ha muerto..." << endl;
                cout << "Causa de la muerte: Hambruna " << endl;
                cout << "--------------------------------" << endl;

                system("pause");
                system("cls");
            }
            else
            {

                /// CLASIFICADO - SE DESCUENTAN LOS KILOS DE COMIDA ETAPA 1

                comida = comida - 14;

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

                /// INICIO DE LA ETAPA NRO 2 (BALSA)

                for (int i = 1; i < 7; i++)
                {
                    cout << "Usted esta en el dia" << i << endl;
                    if (i == 6)
                    {
                        cout << ultimoDia << endl;
                    }
                    cout << "Elija una opcion" << endl;
                    cout << "1. Para buscar comida" << endl;
                    cout << "2. Para buscar recursos" << endl;
                    int respuesta;
                    cin >> respuesta;

                    system("pause");
                    system("cls");

                    if (balsa < 100)
                    {
                        switch (respuesta)
                        {
                        case 1:

                            cout << "-----------------------------------" << endl;
                            cout << "Eligio comida, ahora elija donde:" << endl;
                            cout << "-----------------------------------" << endl;
                            cout << endl;
                            cout << "1 - Pesca en el rio" << endl;
                            cout << "2 - Cosecha en la zona de arboles" << endl;
                            cout << "3 - Cosecha en la zona de arbustos" << endl;
                            cout << "4 - Para cambiar de opcion" << endl;
                            cout << endl;

                            int respuesta;
                            cin >> respuesta;

                            switch(respuesta)
                            {
                            case 1:
                                obtenerComida(comida);

                                system("pause");
                                system("cls");

                                break;

                            case 2:
                                obtenerComida(comida);

                                system("pause");
                                system("cls");

                                break;

                            case 3:
                                obtenerComida(comida);

                                system("pause");
                                system("cls");

                                break;

                            default:
                                system("pause");
                                system("cls");

                                break;
                            }

                            break;

                        case 2:

                            ruleta_chance = obtenerRecursos(balsa);

                            system("pause");
                            system("cls");

                            break;

                        case 3:

                            ruleta_chance = obtenerRecursos(balsa);

                            system("pause");
                            system("cls");

                            break;

                        default:

                            system("pause");
                            system("cls");

                            break;
                        }
                    }
                    else
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

                        int respuesta;
                        cin >> respuesta;

                        switch (respuesta)
                        {
                        case 1:

                        obtenerComida(comida);

                        system("pause");
                        system("cls");
                            break;

                        case 2:

                        obtenerComida(comida);

                        system("pause");
                        system("cls");

                            break;

                        case 3:

                        obtenerComida(comida);

                        system("pause");
                        system("cls");

                            break;

                        default:
                            break;
                        }
                    }

                    cout << "Ha terminado la etapa 2" << endl;
                }
                cout << "---------------------------" << endl;
                cout << "Inicio de la etapa 3" << endl;
                cout << "---------------------------" << endl;

                cout << "Ahora tendras 3 opciones de ruta a traves del rio..." << endl;
                cout << "Debes seleccionar una y llegar en menos de 24 horas al destino" << endl;
                cout << "De lo contrario quedaras eliminado" << endl;

                cout << "1. Ruta a traves del pantano" << endl;
                cout << "2. Ruta en los rapidos" << endl;
                cout << "3. Ruta a traves de la selva" << endl;

                cin >> opcion;

                switch (opcion)
                {
                case 1:

                    break;
                case 2:

                    break;
                case 3:

                    break;
                }
            }
        }
        else
        {
            condicion = 2;
            cout << "Sos cagoooooooon" << endl;
        }
    }
    while (condicion == 1);
    return 0;
}
