#include <iostream>
#include <stdlib.h>

using namespace std;


bool verificar(int*, int, int);
void lista(int*, int);
void imprimir(int matriz[3][3], int, int);
void diag(int matriz[3][3], int);
int col(int matriz[3][3], int, int, int);
int fil(int matriz[3][3], int, int, int);

int main(){

   const int columnas = 3;
   const int filas = 3;
   int matriz[filas][columnas];
   int arre[filas*columnas];
   int i1 = 0;
   int i2 = 0;
   int num = 0;
   int a = 0;
   int resul = 0;
   bool aux = true;


    lista(arre , filas*columnas);

   for(; i1 < filas; i1 ++){//crear matriz
        for(; i2 < columnas; i2 ++){
            cout << "INGRESE UN NUMERO: "; cin >> num;

            aux = verificar(arre, a + 1, num);
            while(aux == false){
                cout << "NUMERO INVALIDO, POR FAVOR INGRESE UN NUMERO: "; cin >> num;
                aux = verificar(arre, a + 1, num);
            }

            arre[a] = num;
            a ++;
            matriz[i1][i2] = num;
        }
    i2 = 0;
   }

   i2 = 0;
   i1 = 0;
   a = col(matriz, i1, i2, columnas);

   diag(matriz, a);//diagonales

   for(; i2 < 3; i2++){//columnas suma
       resul = col(matriz, i1, i2, columnas);
       if(resul != a){
           i1 = 0;
           i2 = 0;
            imprimir(matriz, i1, i2);
            cout << "No es un cuadrado magico" << endl;
            exit(0);
       }
   }
   i2 = 0;
   for(; i1 < 3; i1 ++){//filas suma
       a = fil(matriz, i1, i2, filas);
       if(resul != a){
           i1 = 0;
           i2 = 0;
            imprimir(matriz, i1, i2);
            cout << "No es un cuadrado magico" << endl;
            exit(0);
        }
   }
   i1 = 0;
   i2 = 0;

   imprimir(matriz, i1, i2);//imprimir matriz
   cout << "Es un cuadrado magico" << endl;

    return 0;
}





bool verificar(int arre[], int tam, int num){//verificar que no se repitan los numeros
    int a = 0;
    int i = 0;

    for(; i < tam; i ++){
        a = arre[i];
        if(num == a){
            return false;
        }
    }

    return true;

}

void lista(int arre[], int tam){//crear lista de tamaño n
    int i = 0;

    for(; i < tam; i ++){
        arre[i] = -12345;
    }
}


int col(int matriz[3][3], int i1 , int i2, int columnas){//sumar columnas
    int resul = 0;

    for(; i1 < columnas; i1 ++){
        resul += matriz[i1][i2];
     }
    cout << endl;

    return resul;

}

int fil(int matriz[3][3], int i1, int i2, int filas){//sumar filas
    int resul = 0;

    for(; i2 < filas; i2 ++){
        resul += matriz[i1][i2];
    }


    return resul;

}

void imprimir(int matriz[3][3],int i1, int i2){//imprimir matriz
    for(; i1 < 3; i1 ++){
         for(; i2 < 3; i2 ++){
             cout << matriz[i1][i2] << " ";
         }
        i2 = 0;
        cout << endl;
     }

}

void diag(int matriz[3][3], int valor){//diagonales suma
    int resul = 0;
    int i1 = 0;
    int i2 = 0;

    for(; i1 < 3; i1 ++){
        resul += matriz[i1][i2];
        i2 ++;
    }
    if(resul != valor){
        i1 = 0;
        i2 = 0;
         imprimir(matriz, i1, i2);
         cout << "No es un cuadrado magico" << endl;
         exit(0);
    }
    i1 = 0;
    i2 = 2;
    resul = 0;

    for(; i1 < 3; i1 ++){
        resul += matriz[i1][i2];
        i2 --;
    }
    if(resul != valor){
        i1 = 0;
        i2 = 0;
         imprimir(matriz, i1, i2);
         cout << "No es un cuadrado magico" << endl;
         exit(0);
    }


}



