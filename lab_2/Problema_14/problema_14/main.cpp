#include <iostream>

using namespace std;

void imprimir(int matriz[5][5], int, int);
void rotar90(int matriz[5][5], int, int);
void rotar180(int matriz[5][5], int, int);
void rotar270(int matriz[5][5], int, int);

int main(){

   int matriz[5][5];
   int i1 = 0;
   int i2 = 0;
   int num = 1;

   for(; i1 < 5; i1 ++){//crear matriz
        for(; i2 < 5; i2 ++){
            matriz[i1][i2] = num;
            num ++;
        }
    i2 = 0;
    }

   cout << "Matriz original" << endl;
   imprimir(matriz, 0, 0);

   cout << "Matriz rotada 90 grados" << endl;
   rotar90(matriz, 0, 4);
   imprimir(matriz, 0, 0);

   cout << "Matriz rotada 180 grados" << endl;
   rotar180(matriz, 4, 4);
   imprimir(matriz, 0, 0);

   cout << "Matriz rotada 270 grados" << endl;
   rotar270(matriz, 4, 0);
   imprimir(matriz, 0, 0);

   return 0;

}


void imprimir(int matriz[5][5], int i1, int i2){//imprimir matriz
    for(; i1 < 5; i1 ++){
         for(; i2 < 5; i2 ++){
             cout << matriz[i1][i2] << " ";
         }
        i2 = 0;
        cout << endl;
     }

}

void rotar90(int matriz[5][5], int i1, int i2){//crear matriz 90 grados
    int num = 1;

    for(; i2 >= 0; i2 --){
         for(; i1 < 5; i1 ++){//recorrer filas
             matriz[i1][i2] = num;
             num ++;
         }
     i1 = 0;

     }

}


void rotar180(int matriz[5][5], int i1, int i2){//crear matriz 180 grados
    int num = 1;

    for(; i1 >= 0; i1 --){
         for(; i2 >= 0; i2 --){
             matriz[i1][i2] = num;
             num ++;
         }
     i2 = 4;
     }

}

void rotar270(int matriz[5][5], int i1, int i2){//crear matriz 270 grados
    int num = 1;

    for(; i2 < 5; i2 ++){
         for(; i1 >= 0; i1 --){
             matriz[i1][i2] = num;
             num ++;
         }
     i1 = 4;
     }

}














