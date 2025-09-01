#include<iostream>
using namespace std;

int main(){
    int A[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int B[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (A[i][j] != B[i][j]){
                cout << "Las matrices no son iguales" << A[i][j] << endl;
                return 0;
            }
        }
    }
    cout << "Las matrices son iguales" << endl;
    return 0;
}