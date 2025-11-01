#include<iostream>

using namespace std;

int main(){
    int matriz_0[1] = {1};
    int matriz[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int matriz_b[3][3][3] = {
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        },
                {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        },
                {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        },
    };
    cout << "----1 dimension---\n";
    cout << "Posicion (1)" << endl;
    cout << "El valor es: " << matriz_0[0] << endl;
    cout << "La direccion es: " <<&matriz_0[0] << endl;
    //3x3
    cout << "----2 dimensiones---\n";
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
        cout << "Posicion (" << i << ", " << j << ") :\n";
        cout << "El valor almacenado es: " << matriz[i][j] << endl;
        cout << "La direccion es: " << &matriz[i][j] << "\n";
        }
    }
    cout << "Los datos ocupan" << &matriz[0][1] - &matriz[0][0] << "bytes\n"; 
    //3x3x3
    cout << "----3 dimensiones\n";
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            for (int k=0; k<3; k++){
                cout << "Posicion (" << i << ", " << j << ", " << k << ") :\n";
                cout << "El valor almacenado es: " << matriz_b[i][j][k] << endl;
                cout << "La direccion es: " << &matriz_b[i][j][k] << "\n";
            }
        }
    }
    cout << "Los datos ocupan " <<   &matriz_b[0][0][1] - &matriz_b[0][0][0] << " bytes\n"; 
}