#include <iostream>
using namespace std;

int main() {
    char repeat;

    do {
        int n;
        int matrixA[3][3];
        int matrixB[3][3];

        cout << "Enter the size of the square matrices (2 or 3): ";
        cin >> n;

        if (n != 2 && n != 3) {
            cout << "Only 2x2 or 3x3 matrices are allowed." << endl;
            return 0;
        }

        // Input for matrix A
        cout << "\nEnter the elements of matrix A:\n";
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) {
                cout << "A[" << i << "][" << j << "]: ";
                cin >> matrixA[i][j];
            }

        // Input for matrix B
        cout << "\nEnter the elements of matrix B:\n";
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) {
                cout << "B[" << i << "][" << j << "]: ";
                cin >> matrixB[i][j];
            }

        // Display matrices
        cout << "\nMatrix A:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << matrixA[i][j] << "\t";
            cout << endl;
        }

        cout << "\nMatrix B:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << matrixB[i][j] << "\t";
            cout << endl;
        }

        // Calculate determinants
        int detA = 0, detB = 0;
        if (n == 2) {
            detA = matrixA[0][0]*matrixA[1][1] - matrixA[0][1]*matrixA[1][0];
            detB = matrixB[0][0]*matrixB[1][1] - matrixB[0][1]*matrixB[1][0];
        } else if (n == 3) {
            detA = matrixA[0][0]*(matrixA[1][1]*matrixA[2][2] - matrixA[1][2]*matrixA[2][1])
                 - matrixA[0][1]*(matrixA[1][0]*matrixA[2][2] - matrixA[1][2]*matrixA[2][0])
                 + matrixA[0][2]*(matrixA[1][0]*matrixA[2][1] - matrixA[1][1]*matrixA[2][0]);

            detB = matrixB[0][0]*(matrixB[1][1]*matrixB[2][2] - matrixB[1][2]*matrixB[2][1])
                 - matrixB[0][1]*(matrixB[1][0]*matrixB[2][2] - matrixB[1][2]*matrixB[2][0])
                 + matrixB[0][2]*(matrixB[1][0]*matrixB[2][1] - matrixB[1][1]*matrixB[2][0]);
        }

        cout << "\nDeterminant of matrix A: " << detA << endl;
        cout << "Determinant of matrix B: " << detB << endl;

        // Ask if user wants to repeat
        cout << "\nDo you want to calculate again? (y/n): ";
        cin >> repeat;
        cout << endl;

    } while (repeat == 'y' || repeat == 'Y');

    cout << "Program finished." << endl;
    return 0;
}