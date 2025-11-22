#include "funciones.h"
#include <iostream>
using namespace std;
#include <time.h>

void mostrar_bienvenida()
{
    cout << "||=========================================================||" << endl;
    cout << "||                                                         ||" <<endl;
    cout << "||Bienvenido al juego de supervivencia en la selva amazonas||" << endl;
    cout << "||                                                         ||" <<endl;
    cout << "||=========================================================||" << endl;
}

void mostrar_reglas()
{
    cout << endl;
    cout << "||===================================================================||" << endl;
    cout << "||      En este juego debera sobrevivir a 3 etapas distintas         ||" << endl;
    cout << "||                                                                   ||" << endl;
    cout << "|| En la primer etapa debera armar un refugio y recolectar alimentos ||" << endl;
    cout << "||                                                                   ||" << endl;
    cout << "||     La condiciones para avanzar a la siguiente etapa son:         ||" << endl;
    cout << "||                  -Consiguir el 100% del refugio-                  ||" << endl;
    cout << "||                  -Recolectar 14 kilos de comida-                  ||" << endl;
    cout << "||===================================================================||" << endl;
    cout << endl;
}

void menu_principal()
{
    cout << "======================" << endl;
    cout << "Quieres jugar al juego? " << endl;
    cout << endl;
    cout << "1 - Iniciar juego" << endl;
    cout << "2 - Salir del juego" << endl;
    cout << "======================" << endl;
}

void cartel_obtener_comida(int comida_obtenida, string zona)
{
    cout << "===============================" << endl;
    cout << "Ha buscado en la zona de: " << zona << endl;
    cout << "Usted recogio " << comida_obtenida << "kg" << endl;
    cout << "===============================" << endl;
}

void cartel_obtener_recursos(int recursos_obtenidos, string zona_recursos)
{
    cout << "--------------------------------------------------------" << endl;
    cout << "Usted consiguio " << recursos_obtenidos << " materiales en su busqueda en: " << zona_recursos << endl;
    cout << "--------------------------------------------------------" << endl;
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

void mostrar_menu_diario(int refugio)
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
    cout << "========================================" << endl;
    cout << "Eligio comida, ahora elija donde buscar:" << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "1 - Pesca en el rio" << endl;
    cout << "2 - Cosecha en la zona de arboles" << endl;
    cout << "3 - Cosecha en la zona de arbustos" << endl;
    cout << "4 - Para cambiar de opcion" << endl;
    cout << "========================================" << endl;
}

void mostrar_zonas_recursos()
{
    cout << "==========================================" << endl;
    cout << "Eligio recursos, ahora elija donde buscar:" << endl;
    cout << "==========================================" << endl;
    cout << endl;
    cout << "1 - Zona de arboles" << endl;
    cout << "2 - Zona de arbustos" << endl;
    cout << "3 - Zona pantano" << endl;
    cout << "4 - Montania" << endl;
    cout << "5 - cambiar de opcion" << endl;
}

void mostrar_balsa_armada()
{
    cout << "Ya consiguio armar la balsa ahora, debe buscar comida..." << endl;
    cout << "1. Para buscar comida" << endl;

    system("pause");
    system("cls");

    cout << "========================================" << endl;
    cout << "Eligio comida, ahora elija donde buscar:" << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "1 - Pesca en el rio" << endl;
    cout << "2 - Cosecha en la zona de arboles" << endl;
    cout << "3 - Cosecha en la zona de arbustos" << endl;
    cout << "4 - Para cambiar de opcion" << endl;
    cout << endl;
}

void muerte_jugador_etapa_1y2()
{
    cout << "|================================|" << endl;
    cout << " |Lo sentimos usted ha muerto...| " << endl;
    cout << " |Causa de la muerte: Hambruna  | " << endl;
    cout << "|================================|" << endl;
}

void cartel_avanza_etapa2(int comida)
{
    cout << "|=================================================|" << endl;
    cout << "|            Fin de la primera etapa...           |" << endl;
    cout << "|Usted ha sobrevivido, avanza a la siguiente ronda|" << endl;
    cout << "|                Comida restante:"<<comida<<"                 |" << endl;
    cout << "|=================================================|" << endl;
    cout << endl;

    step();

    cout << "||============================================================||" << endl;
    cout << "||                    --- ETAPA NRO. 2 ---                    ||" << endl;
    cout << "||                     Armado de la balsa                     ||" << endl;
    cout << "||============================================================||" << endl;
    cout << "||                                                            ||" << endl;
    cout << "||  ¡Felicidades! Has avanzado a la Etapa Nro2  del Concurso. ||" << endl;
    cout << "||                    El juego continúa...                    ||" << endl;
    cout << "||                                                            ||" << endl;
    cout << "||============================================================||" << endl;
    step();
    cout << "=====================================================================" << endl;
    cout << "Comienzo de la segunda etapa: Seguir la corriente" << endl;
    cout << "Tiene 6 dias para construir una balsa y recolectar 12 kilos de comida" << endl;
    cout << "=====================================================================" << endl;
    cout << endl;

    step();
}

void cartel_avanza_etapa3()
{
    cout << "||============================================================||" << endl;
    cout << "||                    --- ETAPA NRO. 3 ---                    ||" << endl;
    cout << "||                Traslado al punto de llegada                ||" << endl;
    cout << "||============================================================||" << endl;
    cout << "||                                                            ||" << endl;
    cout << "||  ¡Felicidades! Has avanzado a la Etapa Final del Concurso. ||" << endl;
    cout << "||                    El juego continúa...                    ||" << endl;
    cout << "||                                                            ||" << endl;
    cout << "||============================================================||" << endl;
    step();
}

void mostrar_rutas_etapa3()
{
    cout << "||===============================================================||" << endl;
    cout << "|                     Inicio de la etapa 3                        |" << endl;
    cout << " |---------------------------------------------------------------| " << endl;
    cout << "|                                                                 |" << endl;
    cout << " |Ahora tendras 3 opciones de ruta a traves del rio...           | " << endl;
    cout << "| Debes seleccionar una y llegar en menos de 24 horas al destino  |" << endl;
    cout << " |De lo contrario quedaras eliminado                             | " << endl;
    cout << "|                                                                 |" << endl;
    cout << "||===============================================================||" << endl;

    cout << "1. Ruta a traves del pantano" << endl;
    cout << "2. Ruta en los rapidos" << endl;
    cout << "3. Ruta a traves de la selva" << endl;
    step();
}

void cartel_eligio_ruta(string ruta, string amenaza)
{
    cout << "================================" << endl;
    cout << "                                " << endl;
    cout << "Usted ha elegido ir por " << ruta << endl;
    cout << "Suerte en su viaje al destino..." << endl;
    cout << "                                " << endl;
    cout << "Cuidado con " <<amenaza << endl;
    cout << "================================" << endl;
    step();
}

///ej: visualizacion if(tiempo_recorrido>tiempo_maximo){mostrar_navio_exitoso()}else{mostrar_navio_fracaso}

void mostrar_navio_exitoso()
{
    ///Explayar luego de crear vectores de jugadores
    cout << "================================================" << endl;
    cout << "Usted ha logrado llegar en tiempo al destino" << endl;
    cout << "Tiempo total hasta llegar al punto de llegada: " << endl;
    cout << "================================================" << endl;
}

void mostrar_navio_muerte()
{
    ///Explayar luego de crear vectores de jugadores
    cout << "============================================" << endl;
    cout << "Usted ha muerto en el trayecto" << endl;
    cout << "Causa de la muerte: " << endl;
    cout << "============================================" << endl;
}
