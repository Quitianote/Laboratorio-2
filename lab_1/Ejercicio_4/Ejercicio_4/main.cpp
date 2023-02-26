#include <iostream>

using namespace std;

int main(){

    int tiempo = 0;
    int duracion = 0;
    int minutos = 0;
    int hora = 0;
    int duracion1 = 0;
    int duracion2 = 0;
    int cont = 0;


    cout << "Ingrese hora: "; cin >> tiempo;/* tiempo */
    while (tiempo > 2459 || tiempo < 100 || tiempo - ((tiempo/100)*100) >= 60){

        cout << tiempo << " es un tiempo invalido" << endl;
        cout << "Ingrese otro valor: "; cin >> tiempo;

    }

    cout << "Ingrese duracion: "; cin >> duracion;/* duracion */
    while (duracion - ((duracion/100)*100) >= 60){

        cout << duracion << " es una duracion invalida" << endl;
        cout << "Ingrese otro valor: "; cin >> duracion;

    }

    minutos = tiempo - ((tiempo/100)*100);
    hora = tiempo - minutos;
    duracion2 = duracion - ((duracion/100)*100);
    duracion1 = duracion - duracion2;
    hora += duracion1;/* suma de horas*/
    tiempo = minutos + duracion2;/* suma de minutos*/
    while (tiempo >= 60){

        cont ++;
        tiempo -= 60;

    }

    hora += (cont*100) + tiempo;
    cont = 0;

    while(hora > 2459){

        cont ++;
        hora -= 2400;


    }

    hora += (cont*100);
    cout << "La hora es " << hora;

    return 0;
