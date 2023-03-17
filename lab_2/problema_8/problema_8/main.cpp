#include <iostream>

using namespace std;

int main(){

    int rec = 0;
    int cont_let = 0;
    int num = 0;
    int a = 0;
    char arre[100];



    cout << "Ingrese cadena de caracteres: " << endl; cin.getline( arre, 100, '\n');


    for(;rec < 100; rec++){
        if(arre[rec] >= 48 && arre[rec] <= 57){
        }
        else{
            cont_let ++;

        }
    }

    char let[cont_let];
    rec = 0;
    cont_let = 0;

    for(;rec < lon; rec++){
        if(arre[rec] >= 48 && arre[rec] <= 57){
            a = arre[rec] - 48;
            num = (num*10) + a;

        }
        else{
            let[cont_let] = arre[rec];
            cont_let ++;

        }
    }


    cout << "Original: " << arre << '\n' << "Texto: " << let << ". Numero: " << num << endl;

    return 0;
}
