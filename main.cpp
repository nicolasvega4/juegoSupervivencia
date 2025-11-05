#include <iostream>
using namespace std;
#include "funciones.h"
#include <time.h>

int main()
{
    srand(time(NULL));
    int condicion = 1;
    string ultimoDia = "Usted esta en el ultimo dia";

    do
    {
        int opcion;
        cout << "Eliga una opcion: " << endl;
        cout << "1 - Iniciar juego" << endl;
        cout << "2 - Salir del juego" << endl;
        cin >> opcion;
        int refugio = 0;
        int obt_refugio = 0;
        
        if (opcion == 1)
        {
            // Inicio de la primera etapa
            cout << "Etapa 1, armar un refugio" << endl;
            for (int i = 1; i <= 7; i++){

                cout << "Esta en el dia: " << i << endl;
                if (i == 7)
                {
                    cout << ultimoDia << endl;
                }

                cout << "Elija una opcion 1 - para comida 2 - para recursos" << endl;
                int respuesta;
                cin >> respuesta;
                switch (respuesta)
                {
                case 1:
                    cout << "Eligio comida, elija una opcion:" << endl;
                    cout << "1 - Pesca en el rio";
                    cout << "2 - Cosecha en la zona de arboustos" << endl;
                    cout << "3 - Cosecha en la zona de arbustos" << endl;
                    cout << "4 - Para cambiar de opcion" << endl;
                    cin >> opcion;

                    switch (opcion)
                    {
                    case 1:
                        obt_refugio = random_int(40, 20);
                        cout << "Usted recogio:" << obt_refugio << endl;
                        refugio += obt_refugio;

                        //Nota: sin probar, el compilador de visual studio code me da error por alguna razon que desconosco
                        break;
                    case 2:
                        cout << "Usted recogio:" << endl;
                        break;
                    case 3:
                        cout << "Usted recogio:" << endl;
                        break;
                    default:
                        i--;
                        break;
                    }

                    break;

                case 2:
                    cout << "Eligio recursos, elija una opcion:" << endl;
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
                        cout << "Usted recogio:" << endl;
                        break;
                    case 2:
                        cout << "Usted recogio:" << endl;
                        break;
                    case 3:
                        cout << "Usted recogio:" << endl;
                        break;
                    case 4:
                        cout << "Usted recogio:" << endl;
                        break;

                    default:
                        i--;
                        break;
                    }

                    break;

                default:
                    break;
                }
            }

            cout << "Fin de la etapa 1" << endl << "Comienzo de la segunda etapa: Construir una balsa" << endl;
            cout << "Tiene 6 dias para construir la balsa" << endl;

            // Inicio de la segunda etapa
            for (int i = 1; i < 7; i++){

                int balsa = 0;

                cout << "Usted esta en el dia" << i << endl;
                if (i == 6)
                {
                    cout << ultimoDia << endl;
                }
                cout << "Elija una opcion" << endl;
                cout << "1. Tronco de arboles" << endl << "2. Hojas de palmera" << endl << "3. Caña" << endl;
                int respuesta;
                cin >> respuesta;
                if (balsa <= 100){
                    switch (respuesta)
                    {
                    case 1:

                        break;

                    case 2:

                        break;

                    case 3:

                        break;

                    default:
                        break;
                    }
                } else {
                    cout << "Usted ha terminado de armar la balsa antes de los 6 dias, usted ahora puede recolectar mas alimentos" << endl;

                    int opcion;
                    cin >> opcion;

                    switch (opcion)
                    {
                    case 1:

                        break;

                    case 2:

                        break;

                    case 3:

                        break;

                    default:
                        break;
                    }
                }

                cout << "Ha terminado la etapa 2" << endl;
            }
            cout<<"---------------------------" << endl;
            cout<<"Inicio de la etapa 3"<<endl;
            cout<<"---------------------------" << endl;

            cout<<"Ahora tendras 3 opciones de ruta a traves del rio..."<<endl;
            cout<<"Debes seleccionar una y llegar en menos de 24 horas al destino"<<endl;
            cout<<"De lo contrario quedaras eliminado"<<endl;

            cout<<"1. Ruta a traves del pantano"<<endl;
            cout<<"2. Ruta en los rapidos"<<endl;
            cout<<"3. Ruta a traves de la selva"<<endl;

            cin >> opcion;

            switch(opcion)
            {
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            }


        }
        else
        {
            condicion = 2;
        }
    } while (condicion == 1);
    return 0;
}
