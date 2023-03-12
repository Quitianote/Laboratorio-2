#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int conv(char arre);

int main(){

    int arre[10];

    cin.getline(arre, 10, '\n');

    conv(arre);

    return 0;
}


int conv(char arre){

    int rec = 0;
    int a = 0;
    int b = 0;
    int lon = sizeof(arre)-1;

    for(;rec < lon; rec++){
        a = arre[rec] - 48;
        b = (b*10) + a;
    }

    cout << b;


}

/*

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int conv(char arre);

int main(){

    int num = 0;
    char arre[];

    cin >>

    num = conv(arre);

    return 0;
}


}

int conv(char *arre){

    int rec = 0;
    int a = 0;
    int resul = 0;
    int lon = sizeof(arre)-1;

    for(;rec < lon; rec++){
        a = arre[rec] - 48;
        resul = (resul*10) + a;
    }

    cout << resul;

    return resul;

}














