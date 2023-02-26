#include <iostream>

using namespace std;

int main(){

    int N = 0;
    int cont = 0;

    cout << "Ingrese la cantidad a determinar: "; cin >> N;

    while(N >= 50000){
        cont ++;
        N -= 50000;

    }

    cout << "50000: " << cont << endl;
    cont = 0;

    while(N >= 20000){
        cont ++;
        N -= 20000;

    }

    cout << "20000: " << cont << endl;
    cont = 0;

    while(N >= 10000){
        cont ++;
        N -= 10000;

    }

    cout << "10000: " << cont << endl;
    cont = 0;

    while(N >= 5000){
        cont ++;
        N -= 5000;

    }

    cout << "5000: " << cont << endl;
    cont = 0;

    while(N >= 2000){
        cont ++;
        N -= 2000;

    }

    cout << "2000: " << cont << endl;
    cont = 0;

    while(N >= 1000){
        cont ++;
        N -= 1000;

    }

    cout << "1000: " << cont << endl;
    cont = 0;

    while(N >= 500){
        cont ++;
        N -= 500;

    }

    cout << "500: " << cont << endl;
    cont = 0;

    while(N >= 200){
        cont ++;
        N -= 200;

    }

    cout << "200: " << cont << endl;
    cont = 0;

    while(N >= 100){
        cont ++;
        N -= 100;

    }

    cout << "100: " << cont << endl;
    cont = 0;

    while(N >= 50){
        cont ++;
        N -= 50;

    }

    cout << "50: " << cont << endl;

    cout << "Faltante: " << N << endl;


    return 0;
}
