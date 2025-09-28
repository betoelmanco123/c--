#include<iostream>

using namespace std;

void transpose() {
    bool up = 1;
    bool down = 1;
    int m;
    int i,j; // Índices
    cout <<  "¿Cuál es el numero de filas y columnas para la Matriz cuadrada A" << endl;
    cin >> m;
    int matriz_A[m][m];
    for (i=0; i<m; i++){
        for (j=0; j<m; j++){
            cout << "¿Cuál es el valor de la matriz A en la posición (" << i << ", " << j << "): ";
            cin >> matriz_A[i][j];
        }
    }
    for (i=0; i<m; i++){
        for (j=0; j<m; j++){
            if (j==i){
                continue;
            }
            if (i<j && up){
                if (matriz_A[i][j] != 0){
                    up = 0;
                }
            }else{
                if (down){
                    if (matriz_A[i][j] != 0){
                        down = 0;
                    }
                }
            }
                
        }           
    }
    if (up && down){
        cout << "La matriz es triangular inferior y superior\n";
    }else if (up){
        cout << "La matriz es triangular superior\n";
    }else if(down){
        cout << "La matriz es triangular inferior\n";
    
    }else{
        cout << "La matriz no es triangular\n";
    }
}

int main(){
    bool foll = 1;
    char value;
    while (foll){
        transpose();
        cout << "do you wanna continue? (y/n)";
        cin >> value;
        if (value == 'n'){
            foll = 0;
        }
    }
}