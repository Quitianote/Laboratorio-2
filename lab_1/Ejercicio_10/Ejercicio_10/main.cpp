#include <iostream>

using namespace std;

int main(){

    int n = 0;
    int num = 7;
    int resul = 3;
    cout << "Ingrese el enesimo numero primo que desea encontrar: "; cin >> n;

    switch(n){
        case 1:
            cout << "El primo numero 1 es: 2" << endl;
            exit(0);
        case 2:
            cout << "El primo numero 2 es: 3" << endl;
            exit(0);
        case 3:
            cout << "El primo numero 3 es: 5" << endl;
            exit(0);
    }
    for(; resul != n; num ++)
        if(num%2 != 0){
            if(num%3 != 0){
                if(num%5 != 0){
                resul ++;
                }
            }
        }
    cout << "El primo numero " << n << " es : " << (num-1) << endl;

    return 0;
}
