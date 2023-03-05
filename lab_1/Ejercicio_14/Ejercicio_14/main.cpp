#include <iostream>

using namespace std;

int palin(int num);

int main(){

    int a = 100;
    int b = 100;
    int c = 0;
    int num = 0;
    int a1 = 0;
    int b1 = 0;
    bool aux = false;

    while(true){
        c = a*b;
        aux = palin(c);

        if(aux == true && c > num){
            num = c;
            a1 = a;
            b1 = b;

        }
        else{
            a ++;
            b ++;
        }
        if(a >= 999){
            cout << a1 << "*" << b1 << "=" << num << endl;
            exit(0);
        }
    }



    return 0;
}

int palin(int num){

    int copia = num;
    int a1 = 0;
    int final = 0;

    while(num){
        a1 = num%10;
        final = final*10 + a1;
        num = num/10;

    }
    if (final == copia){
        return true;
    }

    else{
        return false;

    }

}
