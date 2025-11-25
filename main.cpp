#include <iostream>
using namespace std;
#include "funciones.h"
#include "funcionesJugadores.h"
#include "funcionesRutas.h"
#include "visuales.h"
#include <time.h>

int main()
{

    srand(time(NULL));

    /// Declaracion de variables
    int total_dias = 7;
    const int TAM = 7;
    int refugio = 0;
    int comida = 0;
    int balsa = 0;
    int comida_obtenida = 0;
    int recursos_obtenidos = 0;
    int opcion_menu_principal;

    ///Declara vector de jugador
    int jugador[6];

    ///Variables para parametros de funcion jugadores
    int tiempo_refugio = 0;
    int puesto = 0;

    int condicion = 1;

    string ultimoDia = "Usted esta en el ultimo dia";

    ///Estas variables se utilizaran como parametros en funciones para cada switch
    ///en caso de que la ruleta amenaza devuelva int > 0
    ///se explayaran luego
    string amenaza_cocodrilo = "COCODRILOOO";
    string amenaza_rocas = "ROCAASS" ;
    string amenaza_clima = "TORMENTAAA";

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
        inicializar_jugador(1, jugador);
        for (int i = 1; i <= total_dias; i++)
        {
            const int dia = i;

            system("cls");
            bitacora(dia,jugador,1);
            if (dia == total_dias)
            {
                cout << ultimoDia << endl;
            }

            mostrar_menu_diario(refugio);

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
            muerte_jugador_etapa_1y2();

            comida = 0;
            refugio = 0;

            system("pause");
            system("cls");
        }
        else
        {
            /// CLASIFICADO - SE DESCUENTAN LOS KILOS DE COMIDA ETAPA 1

            comida = comida - 14;
            cartel_avanza_etapa2(comida);
            total_dias = 6;

            /// INICIO DE LA ETAPA NRO 2 (BALSA)

            for (int i = 1; i < total_dias; i++)
            {
                const int dia = i;

                bitacora(dia,jugador,2);

                if (dia == total_dias)
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

                        mostrar_menu_comida();

                        int respuesta;
                        cin >> respuesta;

                        switch(respuesta)
                        {
                        case 1:
                            comida+=generar_comida();

                            system("pause");
                            system("cls");

                            break;

                        case 2:
                            comida+=generar_comida();

                            system("pause");
                            system("cls");

                            break;

                        case 3:
                            comida+=generar_comida();

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

                        balsa += generar_recursos();

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

                        comida+=generar_comida();

                        system("pause");
                        system("cls");
                        break;

                    case 2:

                        comida+=generar_comida();

                        system("pause");
                        system("cls");

                        break;

                    case 3:

                        comida+=generar_comida();

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

            inicio_etapa_3();
        }
    } while (condicion == 1);

    return 0;
}


