#include<iostream>

using namespace std;
int m,p,q,n; // Tamaños
int i,j,k,t; // Índices

void times(){
    
    cout <<  "How many  rows does the matrix A have?\n";
    cin >> m;
    cout << "How many columns does the matrix A have?\n";
    cin >> p;
    cout <<  "How many rows does the matrix B have?\n";
    cin >> q;
    cout << "How many columns does the matrix B have\n";
    cin >> n;
    if (p!=q){
        cout << "La operacion es invalida, la cantidad de columnas de la matriz A debe coicidir con las filas de la matriz B";
        return;
    };
    int matriz_A[m][p], matriz_B[q][n], matriz_C[m][n];
    for (i=0; i<m; i++){
        for (j=0; j<p; j++){
            cout << "¿Cuál es el valor de la matriz A en la posición (" << i << ", " << j << "): ";
            cin >> matriz_A[i][j];
        }
    }
    for (i=0; i<q; i++){
        for (j=0; j<n; j++){
            cout << "¿Cuál es el valor de la matriz B en la posición (" << i << ", " << j << "): ";
            cin >> matriz_B[i][j];
        }
    }
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            matriz_C[i][j] = 0;
            for (k=0; k<p; k++){
                    matriz_C[i][j] += matriz_A[i][k] * matriz_B[k][j];
            }
            cout << matriz_C[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    bool foll = 1;
    char value;
    while (foll){
        times();
        cout << "do you wanna continue? (y/n)";
        cin >> value;
        if (value == 'n'){
            foll = 0;
        }
    }
}