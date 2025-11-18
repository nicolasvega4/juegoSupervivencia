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
    const int total_dias=7;

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
            cout << "--------------------------------" << endl;
            cout << "Lo sentimos usted ha muerto..." << endl;
            cout << "Causa de la muerte: Hambruna " << endl;
            cout << "--------------------------------" << endl;

            comida = 0;
            refugio = 0;


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
                cout << "====================================" << endl;
                cout << "Usted esta en el dia " << i << endl;
                cout << endl;
                cout << "Reservas de comida restantes: " << comida << endl;
                cout << "Progreso en el armado de la balsa: " << balsa << "%" << endl;
                cout << "====================================" << endl;
                cout << endl;

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

                        obtenerRecursos();

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

            cout << "---------------------------" << endl;
            cout << "Inicio de la etapa 3" << endl;
            cout << "---------------------------" << endl;

            cout << "Ahora tendras 3 opciones de ruta a traves del rio..." << endl;
            cout << "Debes seleccionar una y llegar en menos de 24 horas al destino" << endl;
            cout << "De lo contrario quedaras eliminado" << endl;

            cout << "1. Ruta a traves del pantano" << endl;
            cout << "2. Ruta en los rapidos" << endl;
            cout << "3. Ruta a traves de la selva" << endl;

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


