#include <iostream>

using namespace std;

bool primo(int num);

int main(){

    int n = 0;
    int p = 2;
    bool aux = false;
    int resul = 1;
    int a = 0;

    cout << "Ingrese un numero: "; cin >> n;

    a = n;

    while(n != 1){
        aux = primo(p);

        while(n%p == 0 && aux == 1){
            n = n/p;

            if(p > resul){
                resul = p;
            }
        }
        p ++;
    }

    cout << "El mayor factor primo de " << a << " es: " << resul << endl;

    return 0;
}

bool primo(int num){

    if(num == 2 || num == 3){
        return true;

    }

    if(num%2 != 0){
        if(num%3 != 0){
            if(num%5 != 0){
            return true;
            }
        }
    }

    return true;

}







