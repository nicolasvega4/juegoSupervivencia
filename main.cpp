#include <iostream>
using namespace std;
#include "funciones.h"
#include <time.h>

int main()
{

    srand(time(NULL));

    /// Declaracion de variables
    int refugio = 0;
    int comida = 0;
    int balsa = 0;
    int opcion_menu_principal;
    int comida_obtenida = 0;
    int recursos_obtenidos = 0;
    const int total_dias = 7;
    const int total_dias_etapa_2 = 6;

    int condicion = 1;
    string ultimoDia = "Usted esta en el ultimo dia";

    do
    {
        mostrar_bienvenida();
        step();
        mostrar_reglas();
        step();
        menu_principal();

        cin >> opcion_menu_principal;

        system("cls");

        if(opcion_menu_principal == 2)
        {
            cout << "Sos cagoooooooon" << endl;
            return 0;
        }


        /// INICIO DE LA ETAPA NRO 1 (REFUGIO)


        cout << "Etapa 1, armar un refugio" << endl;
        comida_obtenida = 0;
        for (int i = 1; i <= total_dias; i++)
        {
            const int dia = i;

            system("cls");

            bitacora(dia,comida,refugio);

            if (dia == total_dias)
            {
                cout << ultimoDia << endl;
            }

            mostrar_menu_dia(refugio);

            int accion_del_dia;
            cin >> accion_del_dia;

            step();

            switch (accion_del_dia)
            {
            /// SELECCIONA COMIDA
            case 1:

                comida += buscar_comida();

                break;

            /// SELECCIONA RECURSOS

            case 2:

                refugio += buscar_recursos();

                break;
            }
        }
        system("pause");
        system("cls");

        /// MUERTE DE JUGADOR - DESCALIFICADO
        if (comida < 14 || refugio < 100)
        {
            muerte_jugador_etapa_2();

            comida = 0;
            refugio = 0;

            system("pause");
            system("cls");
        }
        else
        {
            /// CLASIFICADO - SE DESCUENTAN LOS KILOS DE COMIDA ETAPA 1

            comida = comida - 14;
            mostrar_etapa_1_completada(comida);

            /// INICIO DE LA ETAPA NRO 2 (BALSA)

            for (int i = 1; i < total_dias_etapa_2; i++)
            {
                const int dia_2 = i;

                bitacora_2(dia_2, comida, balsa);
                
                if (dia_2 == total_dias_etapa_2)
                {
                    cout << ultimoDia << endl;
                }

                cout << "Elija una opcion" << endl;
                cout << "1. Para buscar comida" << endl;
                cout << "2. Para buscar recursos para armar la balsa" << endl;
                int respuesta;
                cin >> respuesta;

                system("pause");
                system("cls");

                if (balsa < 100)
                {
                    switch (respuesta)
                    {
                    case 1:

                        mostrar_menu_comida_etapa_2();

                        int respuesta;
                        cin >> respuesta;

                        switch(respuesta)
                        {
                        case 1:
                            comida+=obtenerComida();

                            system("pause");
                            system("cls");

                            break;

                        case 2:
                            comida+=obtenerComida();

                            system("pause");
                            system("cls");

                            break;

                        case 3:
                            comida+=obtenerComida();

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

                        balsa += obtenerRecursos();

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
                    mostrar_balsa_armada();

                    int respuesta;
                    cin >> respuesta;

                    switch (respuesta)
                    {
                    case 1:

                        comida+=obtenerComida();

                        system("pause");
                        system("cls");
                        break;

                    case 2:

                        comida+=obtenerComida();

                        system("pause");
                        system("cls");

                        break;

                    case 3:

                        comida+=obtenerComida();

                        system("pause");
                        system("cls");

                        break;

                    default:
                        break;
                    }
                }

                cout << "Ha terminado la etapa 2" << endl;
            }

            /// INICIO ETAPA 3

            mostrar_etapada_2_completada();

            int seleccion_ruta;
            cin >> seleccion_ruta;

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

    }
    while (condicion == 1);
    return 0;
}


