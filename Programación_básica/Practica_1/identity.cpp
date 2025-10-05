#include<iostream>

using namespace std;
bool is_running = 1;
char value;
int m,p,q,n; // Tamaños
int i,j,k,t; // Índices
void inverse() {
    cout <<  "¿Cuál es el numero de filas matriz A" << endl;
    cin >> m;
    cout << "¿Cuál es el numero de columnas matriz A" << endl;
    cin >> p;
    cout <<  "¿Cuál es el numero de filas matriz B" << endl;
    cin >> q;
    cout << "¿Cuál es el numero de columnas matriz B" << endl;
    cin >> n;
    if (p!=q){
        cout << "La operacion es invalida, la cantidad de columnas de la matriz A debe coicidir con las filas de la matriz B \n";
        return ;
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
                    return ;}
            }else{
                if (matriz_C[i][j] != 0){
                    cout << "La matriz A no es inversa de B \n";
                    return ;
                    }
                }
        }           
    }
    cout << "La matriz A es inversa de B" << endl;
}

int main(){
    while (is_running){
        inverse();
        cout << "do you wanna continue? (y/n): ";
        cin >> value;
        if (value == 'n'){
            is_running = 0;
        }
    }
}