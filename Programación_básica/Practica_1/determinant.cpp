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

    for (k=0; k<m; k++){
        int copy[m][m];
        for (i=0; i<m; i++){
            for (j=0; j<n; j++){
                copy[i][j] = matriz_A[i][j];
            }
            
        }
        // while (m>2){
            int aux[m-1][m-1];
            for (i=0; i<m; i++){
                for (j=0; j<m; j++){
                    if (i==0 | j==k){
                        continue;
                    }
                    //cout << "( "<< i << ", " << j << ")";
                    if (k==0){
                        // Elimina el caso mas sencillo, se escogio el valor (0,0)
                        aux[i-1][j-1] = copy[i][j];
                    }else if (k==m-1){
                        // Elimina el otro caso sencillo, se escogio el valor (-1,-1)
                        aux[i-1][j] = copy[i][j];
                    }else if(j>k){
                        //se maneja el caso más "difícil", cuando se escoge un valor entre (0, -1), especificament cuando se el tiene que 
                        // restar uno a a las columnas para que coincida
                        aux[i-1][j-1] = copy[i][j];
                        
                    }else if(j<k){
                        //cout << "( "<<  i << ", " << j << ")";
                        aux[i-1][j] = copy[i][j];
                        
                    }
                    
                    
                    
                }
            }
            m = m-1;
            cout << "value: " << matriz_A[0][k] << endl;
            cout << "---------" << endl;
            for (i=0; i<m; i++){
                for (j=0; j<m; j++){
                    cout << aux[i][j] << " " ;
                }
                cout << endl ;
            }
            m = n;
    }
//}
};


 

