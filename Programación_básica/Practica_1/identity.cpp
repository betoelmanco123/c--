#include<iostream>

using namespace std;

int main() {
    int m,p,q,n; // Tamaños
    int i,j,k,t; // Índices
    cout <<  "¿Cuál es el numero de filas matriz A" << endl;
    cin >> m;
    cout << "¿Cuál es el numero de columnas matriz A" << endl;
    cin >> p;
    cout <<  "¿Cuál es el numero de filas matriz B" << endl;
    cin >> q;
    cout << "¿Cuál es el numero de columnas matriz B" << endl;
    cin >> n;
    if (p!=q){
        cout << "La operacion es invalida, la cantidad de columnas de la matriz A debe coicidir con las filas de la matriz B";
        return 0 ;
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
        }
    }
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            if (j==i){
                if (matriz_C[i][j] != 1){
                    cout << "La matriz A no es inversa de B";
                    return 0;}
            }else{
                if (matriz_C[i][j] != 0){
                    cout << "La matriz A no es inversa de B" << "j es" << j << "i es" << i;
                    return 0;
                    }
                }
        }           
    }
    cout << "La matriz A es inversa de B" << endl;
}