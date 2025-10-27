#include<iostream>
using namespace std;
bool is_running = 1;
char value;
int m,p,q,n; // sizes: m=rows of A, p=cols of A, q=rows of B, n=cols of B
int i,j,k,t; // indices: i,j 

int main(){
    while (is_running){
        // Prompt user for dimensions of matrix A
        cout <<  "How many rows does matrix A have?" << endl;
        cin >> m;
        cout << "How many columns does matrix A have?" << endl;
        cin >> p;
        // Prompt user for dimensions of matrix B
        cout <<  "How many rows does matrix B have?" << endl;
        cin >> q;
        cout << "How many columns does matrix B have?" << endl;
        cin >> n;
        // Verify compatibility: p must equal q for multiplication A*B
        if (p!=q){
            cout << "The operation is not possible: both matrices must be square (matching inner sizes).\n";
            return 0;
        };
        // Declare matrices: A is m×p, B is q×n, C will store result (m×n)
        int matriz_A[m][p], matriz_B[q][n], matriz_C[m][n];
        // Input values for matrix A
        for (i=0; i<m; i++){
            for (j=0; j<p; j++){
                cout << "What is the value of matrix A at position (" << i << ", " << j << "): ";
                cin >> matriz_A[i][j];
            }
        }
        // Input values for matrix B
        for (i=0; i<q; i++){
            for (j=0; j<n; j++){
                cout << "What is the value of matrix B at position (" << i << ", " << j << "): ";
                cin >> matriz_B[i][j];
            }
        }
        // Multiply matrices: C = A * B
        for (i=0; i<m; i++){
            for (j=0; j<n; j++){
                matriz_C[i][j] = 0; // Initialize element to 0
                for (k=0; k<p; k++){
                    // Accumulate dot product of row i of A with column j of B
                    matriz_C[i][j] += matriz_A[i][k] * matriz_B[k][j];
                }
            }
        }
        // Check if result C is the identity matrix
        for (i=0; i<m; i++){
            for (j=0; j<n; j++){
                if (j==i){
                    // Diagonal elements must be 1
                    if (matriz_C[i][j] != 1){
                        cout << "Matrix A is not the inverse of B";
                        return 0;
                    }
                } else {
                    // Off-diagonal elements must be 0
                    if (matriz_C[i][j] != 0){
                        cout << "Matrix A is not the inverse of B\n";
                        return 0;
                    }
                }
            }           
        }
        // If all checks passed, A is the inverse of B
        cout << "Matrix A is the inverse of B" << endl;

        // Main loop: continue checking matrix inverses until user chooses to stop
        cout << "Do you want to continue? (y/n): ";
        cin >> value;
        if (value == 'n'){
            is_running = 0; // Exit loop
        }
    }
}
