#include<iostream>

using namespace std;

int main() {
    int conjunto_A[3] = {1,2,3};
    char conjunto_B[3] = {'A', 'B', 'C'};
    int m=3, n=3; //Tamaños
    int i,j;

    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            cout << "(" << conjunto_A[i] << ", " << conjunto_B[j] << ")\n";
        }
    }
}