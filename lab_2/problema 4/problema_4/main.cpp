#include <iostream>
#include <conio.h>

using namespace std;

int conv(char arre[], int lon);

int main(){

    int num = 0;
    int lon = 0;
    char arre[] = "123";
    lon = sizeof(arre)-1;

    conv(arre, lon);

    return 0;
}



int conv(char arre[], int lon){//funcion del problema 4, la funcion "main" solo la use para hacer pruebas

    int rec = 0;
    int a = 0;
    int resul = 0;


    for(;rec < lon; rec++){
        a = arre[rec] - 48;
        resul = (resul*10) + a;
    }

    return resul;

}
