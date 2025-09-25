#include<iostream>
using namespace std;

int main(){
    int i;
    int matriz_A[1][3], matriz_B[3][1], matriz_C[1][1];
    for (i=0; i<3; i++){
        cout << "¿Cuál es el valor de la matriz A en la posición (0, " << i << "): ";
        cin >> matriz_A[0][i];
    }
    for (i=0; i<3; i++){
            cout << "¿Cuál es el valor de la matriz B en la posición (" << i << ", 0): ";
            cin >> matriz_B[i][0];
    }

            matriz_C[0][0] = 0;
            for (i=0; i<3; i++){
                    matriz_C[0][0] += matriz_A[0][i] * matriz_B[i][0];
            }
            cout << matriz_C[0][0] << endl;
    }