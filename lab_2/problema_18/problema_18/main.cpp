#include <iostream>

using namespace std;

long double facto(int);
bool veri(int lista[10], int );
void imprimir(int lista[10]);

int main(){
    int pos = 0;
    int a = 0;
    int num[10];
    num[pos] = a;
    int inf = 1;
    int orden = 9;
    int fact = facto(orden);
    int sup = fact;
    int cont = 0;
    int menor = 0;
    int pos1 = 0;
    int lista[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int elem = 0;
    bool aux = true;
    int n = 0;

    cout << "ingresar numero: "; cin >> n;

    for(;; cont ++){
        if(sup >= n){//mirar si el rango superior es mayor al enesimo que se busca
            lista[pos1] = a;
            elem ++;
            pos ++;
            pos1 ++;
            orden --;//se disminuye el orden
            if(a <= menor){//mirar si es menor al numero menor
                a = menor ++;
                while(aux == true){
                    menor ++;
                    aux = veri(lista, menor);
                }
                aux = true;
            }
            else{
                a = menor;
                fact = facto(orden);
            }

            sup = inf + (fact --);//cambiar superior con el nuevo factorial
        }

        while(aux == true){
            a++;
            aux = veri(lista, a);
        }

        aux = true;
        num[pos] = a;
        inf = sup++;
        sup = inf + (fact --);
        fact = facto(orden);

        if(inf == n){
            break;
        }
        else if(sup == n){
            break;
        }
    }

    pos ++;
    a = 0;
    aux = true;
    for(;pos < 10; pos ++){
        while(aux == true){
            aux = veri(lista, a);
            a ++;
        }
        num[pos] = a;
        lista[pos1] = a;
        pos1 ++;
        a = 0;
    }

    imprimir(lista);

    return 0;
}


long double facto(int n){
  int i = 1;
  long double fact;
  fact = 1;

  for(;i<=n;i++){
       fact = fact * i;
    }
  return fact;
}

bool veri(int lista[10], int num){
    int i = 0;

    for(; i < 10; i ++){
        if(lista[i] == num){
            return true;
        }
    }

    return false;
}

void imprimir(int lista[10]){
    int i = 0;

    for(; i < 10; i ++){
        cout << lista[i];
    }

    cout << endl;
}













