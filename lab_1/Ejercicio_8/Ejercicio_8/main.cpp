#include <iostream>

using namespace std;

int ciclo(int a, int b, int c);

int main(){

    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Ingrese a: "; cin >> a;
    cout << "Ingrese b: "; cin >> b;
    cout << "Ingrese c: "; cin >> c;

    ciclo( a, b, c);

    return 0;
}

int ciclo( int a, int b, int c){

    int aux = 1;
    int resul = 0;
    for(; aux < c; aux ++)
        if (aux%a == 0){
            cout << aux << "+";
            resul += aux;
        }

    aux = 1;

    for(; aux < c; aux ++)
        if (aux%b == 0 && aux%a != 0){
            cout << aux;
            if (aux + b < c && (aux + b)%a != 0){
                cout << "+";
            }
            resul += aux;
        }

    cout << "=" << resul << endl;


    return resul;
}

