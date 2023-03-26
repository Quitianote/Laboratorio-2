#include <iostream>

using namespace std;

long double form(int);
long double facto(int);

int main(){
    int n = 0;

    cout << "Ingrese numero nxn de la matriz: "; cin >> n;
    cout << "Para una malla de " << n << "x" << n << " puntos hay " << form(n) << " caminos." << endl;

    return 0;
}


long double facto(int n){
  int i = 1;
  long double fact;
  fact = 1;

  for(;i<=n;i++)
       fact = fact * i;

  return fact;
}

long double form(int n){
    long double resul = 0;
    long double fact = facto(n);

    resul = facto(2*n)/(fact*fact);

    return resul;
}










