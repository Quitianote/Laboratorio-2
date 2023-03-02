#include <iostream>

using namespace std;

float factorial(int n);

int main(){

    int ini = 1;
    int n = 0;
    float resultado = 1;


    cout << "Ingrese un numero: "; cin >> n ;

    for(ini = 1; ini < n; ini ++)
        resultado += 1/factorial(ini);

    cout << "e es aproximadamente: " << resultado << endl;
    return 0;
}

float factorial(int n){

   int a = 1;
   int i = 1;

   for(i = 1; i <= n; i++)
        a = a * i;

   return a;
}
