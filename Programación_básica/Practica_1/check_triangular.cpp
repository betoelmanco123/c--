#include<iostream>

using namespace std;
bool is_running = 1;
bool up = true;
bool down = true;
char value;
int m;   // Size
int i,j; // Indices

void check_triangular() {
    up = true;
    down = true;
    cout << "How many rows/columns does the matrix have?\n";
    cin >> m;

    int matriz_A[m][m];

    for (i = 0; i < m; i++){
        for (j = 0; j < m; j++){
            cout << "What is the value of the matrix at position (" << i << ", " << j << "): ";
            cin >> matriz_A[i][j];
        }
    }

    for (i = 0; i < m; i++){
        for (j = 0; j < m; j++){
            if (j == i) { // The main diagonal
                continue;
            }
            if (i < j && up) { // Above the diagonal
                if (matriz_A[i][j] != 0){
                    up = false;
                }
            } else if (i > j && down) { // Below the diagonal
                if (matriz_A[i][j] != 0){
                    down = false;
                }
            }
        }
    }

    if (up && down){
        cout << "The matrix is both upper and lower triangular (diagonal).\n";
    } else if (up){
        cout << "The matrix is upper triangular.\n";
    } else if (down){
        cout << "The matrix is lower triangular.\n";
    } else {
        cout << "The matrix is not triangular.\n";
    }
}

int main(){
    while (is_running){
        check_triangular();
        cout << "Do you want to continue? (y/n): ";
        cin >> value;
        if (value == 'n'){
            is_running = 0;
        }
    }
}
