#include<iostream>

using namespace std;

int main() {
    int i,j,k,l;
    int m = 4;
    int n = 4;
    int matriz_A[4][4] = {
        {1,2,3,10},
        {4,5,6,11},
        {7,8,9,12},
        {13,14,15,16}
    };
    int aux[3][3];
    for (k=0; k<m; k++){
        for (i=0; i<m; i++){
            for (j=0; j<n; j++){
                if (i==0 | j==k){
                    continue;
                }
                //cout << "( "<< i << ", " << j << ")";
                if (k==0){
                     // works cout << "( " << i-1 << ", " << j-1 << ")";
                     aux[i-1][j-1] = matriz_A[i][j];
                }else if (k==m-1){
                    // cout << "( " << i - 1 << ", " << j << ")";
                    aux[i-1][j] = matriz_A[i][j];
                }else if(j>k){
                    //cout << "j es "<< j << " y k " << k;
                    //cout << "( " << i  << ", " << j - 1 << ")";
                    aux[i-1][j-1] = matriz_A[i][j];
                    
                }else if(j<k){
                    //cout << "( "<<  i << ", " << j << ")";
                    aux[i-1][j] = matriz_A[i][j];

                }

                    

        }
        }
        cout << "---------" << endl;
        for (i=0; i<3; i++){
            for (j=0; j<3; j++){
                cout << aux[i][j] << " " ;
            }
            cout << endl ;
        }
    }
};

int det(int matrix[]) {


};
 

