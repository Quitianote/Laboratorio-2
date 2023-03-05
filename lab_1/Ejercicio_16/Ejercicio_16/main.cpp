#include <iostream>

using namespace std;

int serie(int k, int cont);


int main(){

    int k = 0;
    int cont = 0;
    int j = 0;
    int mayor = 0;
    int semilla = 0;
    int cont1 = 0;

    cout << "Ingrese un numero: "; cin >> k;

    j = k;

    while(j != 1){
        mayor = serie( j, cont);
        if(mayor > cont1){
            cont1 = mayor;
            semilla = j;
        }
        j --;
    }

    cout << "La serie mas larga es con la semilla: " << semilla << ", teniendo " << cont1 << " terminos." << endl;


    return 0;
}

int serie(int k, int cont){
    cout << "**" << k << ",";
    while(k != 1){
        if(k%2 == 0){
            k /= 2;

        }
        else{
            k = 3*k + 1;

        }
        cont ++;
        if(k == 1){
            cout << 1 << endl;
            return cont;

        }
        cout << k << ",";
    }
    return 0;


}












