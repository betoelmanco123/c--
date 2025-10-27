#include<iostream>// Includes the library for input and output operations
using namespace std;// Allows using standard functions without the 'std::' prefix

// Global variables
bool is_running = 1;
char value;
bool up = true;
bool down = true;
int m;
int i,j; 

int main(){
// Loop that keeps the program running until the user decides to stop
	while (is_running){
    up = true;// Reset upper triangular check for each loop
    down = true; // Reset lower triangular check for each loop
    // Ask the user for the size of the matrix
    cout <<  "How many columns and rows does the matrix have?\n";
    cin >> m;
    // Declare a square matrix of size m x m
    int matriz_A[m][m];
    // Fill the matrix with values entered by the user
    for (i=0; i<m; i++){
        for (j=0; j<m; j++){
            cout << "What is the value of the matrix on the position (" << i << ", " << j << "): ";
            cin >> matriz_A[i][j];
        }
    }
    // Check the matrix to determine its type
    for (i=0; i<m; i++){
        for (j=0; j<m; j++){
            
            if (i<j && down){// Check elements above the diagonal
                if (matriz_A[i][j] != 0){
                    down = false;// If any value above the diagonal is not zero, then, it's not lower triangular
                }
            }else if (i>j && up){//Check elements below the diagonal
                if (matriz_A[i][j] != 0){
                    up = false;//If any value below the diagonal is not zero, then, it's not lupper triangular
                    }
            }
                
        }           
    }
    // Display the result based on the checks
    if (up && down){
        cout << "The matrix is upper and lower triangular.\n";

    }else if (up){
        cout << "The matrix is upper triangular.\n";

    }else if(down){
        cout << "The matrix is lower triangular.\n";

    }else{
    cout << "The matrix isn't triangular.\n";}
    // Ask the user if they want to continue
        cout << "Do you wanna continue? (y/n): ";
        cin >> value;
        // If the user enters 'n', stop the loop
        if (value == 'n'){
            is_running = 0;
        }
    }
}