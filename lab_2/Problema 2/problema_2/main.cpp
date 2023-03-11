#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(0));
    int alfa = 0;
    int cont = 0;
    int num = 65;
    int i = 0;
    char arre[200];
    char a = 0;
    char let = 0;
    char aux = 0;

    for(; cont < 200; cont++){

            a = 65 + rand()%(91-65);
            arre[cont] = a;
            cout << arre[cont];


    }

    cout << endl;
    cont = 0;

    for(; alfa < 26; alfa++, num ++, i = 0){
        for(; i < 200; i++){

            let = arre[i];

            if( let == num){

                aux = let;
                cont ++;

            }
            if(i == 199){

                cout << aux << ": " << cont << endl;
                cont = 0;


            }
        }
    }

    return 0;
}




