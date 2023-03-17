#include <iostream>

using namespace std;

int valor(char);

int main(){

    char arre[100];
    int total = 0;
    int num1 = 0;
    int num2 = 0;
    int i = 0;

    cout << "Ingrese numero romano: ";cin.getline( arre, 100, '\n');

    total = valor(arre[0]);

    for(; i < 100; i++){
        num1 = valor(arre[i]);
        num2 = valor(arre[i + 1]);

        if(num2 <= num1){
            total += num2;

        }
        else{
            total -= num2;
            if( total < 0){
                total *= -1;

            }
        }

        if(arre[i] < 65 || arre[i] > 90){
            break;

        }

    }

    cout << "El numero ingresado fue: " << arre << endl;
    cout << "Que corresponde a: " << total << endl;


    return 0;

}


int valor(char ref){
    int resul = 0;
    switch(ref){
        case 'I':
            resul = 1;
            break;

        case 'V':
            resul = 5;
            break;

        case 'X':
            resul = 10;
            break;

        case 'L':
            resul = 50;
            break;

        case 'C':
            resul = 100;
            break;

        case 'D':
            resul = 500;
            break;

        case 'M':
            resul = 1000;
            break;

    }

    return resul;

}








