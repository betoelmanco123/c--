#include<iostream>

using namespace std;
bool is_running = 1;
bool up = 1;
bool down = 1;
char value;
int m;//Size
int i,j; // Index

void transpose() {
    cout <<  "How many columns and rows does the matrix have?\n";
    cin >> m;
    int matriz_A[m][m];
    for (i=0; i<m; i++){
        for (j=0; j<m; j++){
            cout << "what is the value of the matrix on the positoon (" << i << ", " << j << "): ";
            cin >> matriz_A[i][j];
        }
    }
    for (i=0; i<m; i++){
        for (j=0; j<m; j++){
            if (j==i){//The diagonal
                continue;
            }
            if (i<j && up){//Above the diagonal
                if (matriz_A[i][j] != 0){
                    up = 0;
                }
            }else{//Below the diagonal
                if (down){
                    if (matriz_A[i][j] != 0){
                        down = 0;
                    }
                }
            }
                
        }           
    }
    if (up && down){
        cout << "La matriz es triangular inferior y superior\n";
    }else if (up){
        cout << "La matriz es triangular superior\n";
    }else if(down){
        cout << "La matriz es triangular inferior\n";
    
    }else{
        cout << "La matriz no es triangular\n";
    }
}

int main(){
    while (is_running){
        transpose();
        cout << "do you wanna continue? (y/n): ";
        cin >> value;
        if (value == 'n'){
            is_running = 0;
        }
    }
}