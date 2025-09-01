#include<iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Numero de filas en tu matriz: ";
    cin >> m;
    cout << "Numero de columnas en tu matriz: ";
    cin >> n;
    int matriz[m][n];
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << "Cual es el valor de la posición (" << i << "," << j << "): ";
            cin >> matriz[i][j];
        }
    }
    cout << "Tu matriz es: " << endl;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}