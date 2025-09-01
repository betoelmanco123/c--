#include<iostream>
using namespace std;

int main() {
    int A[2][3] = {
        {1,2,3},
        {4,5,6},
    };
    int result[3][2];
    for ( int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            result[i][j] = A[j][i];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
        cout << endl;   
    return 0;
}