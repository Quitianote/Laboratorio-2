#include <iostream>

using namespace std;

int divisor(int n);


int main(){

    int k = 0;
    int num = 1;
    int mayor = 0;
    int cont = 0;
    int aum = 2;
    int resul = 0;

    cout << "Ingrese un numero: "; cin >> k;

    for(; aum <= (k+1); aum++){
        cont = divisor(num);

        if(cont > mayor){
            mayor = cont;
            resul = num;
        }

        num += aum;
    }

    cout << "El numero es: " << resul << " que tiene " << mayor << " divisores" << endl;

    return 0;
}

int divisor(int n){

    int cont = 0;
    int pos = 1;

    for(; pos <= n; pos++)
        if(n%pos == 0){
            cont ++;
        }

    return cont;
}
