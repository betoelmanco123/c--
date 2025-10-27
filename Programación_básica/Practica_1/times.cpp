#include<iostream>
using namespace std;

int main() {
    bool is_running = true;// Control variable to keep the program running
    char value; // Variable to store user choice (y/n)

    // The main loop runs until the user decides to stop
    while (is_running) {
        int m, p, q, n; // Matrix sizes: A(m×p), B(q×n)
        int i, j, k;    // Indices for loops

        // Ask the user for the size of matrix A
        cout << "How many rows does matrix A have?\n";
        cin >> m;
        cout << "How many columns does matrix A have?\n";
        cin >> p;

        // Ask the user for the size of matrix B
        cout << "How many rows does matrix B have?\n";
        cin >> q;
        cout << "How many columns does matrix B have?\n";
        cin >> n;

        // Check if the matrices can be multiplied
        if (p != q) {
            cout << "Invalid operation: the number of columns of matrix A must match the number of rows of matrix B.\n";
        } else {
            // Declare matrices A, B, and C (C will store the result)
            int matriz_A[m][p], matriz_B[q][n], matriz_C[m][n];

            //Input phase for matrix A
            for (i = 0; i < m; i++) {
                for (j = 0; j < p; j++) {
                    cout << "What is the value of matrix A at position (" << i << ", " << j << "): ";
                    cin >> matriz_A[i][j];
                }
            }

            // Input phase for matrix B
            for (i = 0; i < q; i++) {
                for (j = 0; j < n; j++) {
                    cout << "What is the value of matrix B at position (" << i << ", " << j << "): ";
                    cin >> matriz_B[i][j];
                }
            }

            //Multiplication phase
            for (i = 0; i < m; i++) {       // Loop through rows of A
                for (j = 0; j < n; j++) {   // Loop through columns of B
                    matriz_C[i][j] = 0;     // Initialize each element of C
                    for (k = 0; k < p; k++) {
                        // Multiply corresponding elements and accumulate
                        matriz_C[i][j] += matriz_A[i][k] * matriz_B[k][j];
                    }
                    cout << matriz_C[i][j] << " ";  // Print result element
                }
                cout << endl;   // Move to next row when printing
            }
        }

        // Ask the user if they want to run the program again
        cout << "Do you want to continue? (y/n) ";
        cin >> value;

        // If the user types 'n', exit the loop and stop the program
        if (value == 'n') {
            is_running = false;
        }
    }
}
