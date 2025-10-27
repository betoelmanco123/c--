#include<iostream>

using namespace std;

int main(){
    int m,n,p,q;
    int i,k;
    cout <<  "How many  rows does the matrix A have?\n";
    cin >> m;
    cout << "How many columns does the matrix A have?\n";
    cin >> p;
    cout <<  "How many rows does the matrix B have?\n";
    cin >> q;
    cout << "How many columns does the matrix B have\n";
    cin >> n;
    if (p != q){
        cout << "La operacion es invalida, la cantidad de columnas de la matriz A debe coicidir con las filas de la matriz B";
        return;
    };
    int matriz_A[m][p], matriz_B[q][n], matriz_C[m][n];
}

