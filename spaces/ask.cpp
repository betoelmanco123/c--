#include<iostream>

using namespace std;

int main(){
    //3x3
    cout << "esta es la de 3x3\n";
    int matriz[3][3];
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
        cout << &matriz[i][j] << "\n";
        }
    }
    //3x3x3
    cout << "esta es la de 3x3x3\n";
    int matriz_b[3][3][3];
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            for (int k=0; k<3; k++){
                cout << &matriz_b[i][j][k] << "\n";
            }
        }
    }
}