#include<iostream>

using namespace std;


void determinant(int n,int mat[10][10]){
    int determinant;
    int k,i,j;
    int value, result;
    int sum = 0;
    int aux[10][10];
    for (k=0; k<n; k++){
        for (i=0; i<n; i++){
            for (j=0; j<n; j++){
                if (i==0 || j==k){
                    continue;
                }
                //cout << "( "<< i << ", " << j << ")";
                if (k==0){
                    // Elimina el caso mas sencillo, se escogio el valor (0,0)
                    aux[i-1][j-1] = mat[i][j];
                }else if (k==2){
                    // Elimina el otro caso sencillo, se escogio el valor (-1,-1)
                    aux[i-1][j] = mat[i][j];
                }else if(j>k){
                    //se maneja el caso más "difícil", cuando se escoge un valor entre (0, -1), especificament cuando se el tiene que 
                    // restar uno a a las columnas para que coincida
                    aux[i-1][j-1] = mat[i][j];
                    
                }else if(j<k){
                    //cout << "( "<<  i << ", " << j << ")";
                    aux[i-1][j] = mat[i][j];
                    
                }
                
            }
        }
        for (i=0; i<n-1; i++){
            for (j=0; j<n-1; j++){
                cout << aux[i][j] << " ";
                
            }
            cout << endl;
        }
        determinant = aux[0][0] * aux[1][1] - aux[1][0] * aux[0][1];
        if (k % 2 == 0){
            value = mat[0][k];}
            else {
                value = mat[0][k] * -1;
            }
            result = determinant * value;
            cout << "Determinant = " << determinant << "  value = " << value << endl;
            cout << "result" << result << endl;
            sum += result;
        }
    }
int main(){
        int m = 3;
        int matrix_A[3][3] = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
    
        determinant(m ,matrix_A);
    }