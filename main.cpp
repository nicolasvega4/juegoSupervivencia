#include <iostream>
using namespace std;
#include "funciones.h"
#include <time.h>

int main()
{
    srand(time(NULL));
    int condicion = 1;

    do
    {
        int opcion;
        cout << "Eliga una opcion: " << endl;
        cout << "1 - Iniciar juego" << endl;
        cout << "2 - Salir del juego" << endl;
        cin >> opcion;

        if (opcion == 1)
        {
            cout << "Etapa 1, conseguir comida o materiales" << endl;
            for (int i = 1; i <= 7; i++)
            {
                cout << "Esta en el dia: " << i << endl;
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
                    cin >> opcion;

                    switch (opcion)
                    {
                    case 1:

                        break;

                    default:
                        break;
                    }

                    break;

                case 2:
                    cout << "Eligio recursos, elija una opcion:" << endl;
                    cout << "1 - Rama de arboles" << endl;
                    cout << "2 - Ramas de arbustos" << endl;
                    cout << "3 - Barro" << endl;
                    cout << "4 - Rocas" << endl;
                    break;

                default:
                    break;
                }
            }
        }
        else
        {
            condicion = 2;
        }
    } while (condicion == 1);
    return 0;
}
