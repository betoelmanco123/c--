#include<iostream>

using namespace std;

//show the matrix 3x3 to the user
void desplegarMatriz(int matriz[3][3]){
    cout << "The matrix is: \n";
    for (int i = 0; i< 3; i++){
        cout << "| ";
        for (int j = 0; j< 3; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "|\n";
    }
}
//get the determinat of a 2x2 matrix using the formula
int detM2x2(int matriz[2][2]){
    return matriz[0][0] * matriz[1][1] - matriz[1][0] * matriz[0][1];
}
//optional just to debug the program
void show_2x2(int matriz[2][2]){
    for (int i = 0; i< 2; i++){
        cout << "| ";
        for (int j = 0; j< 2; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "|\n";
    }
}
//return the determinant of the minor produced from
//a specific position in the original matrix
int det_minor(int matriz[3][3], int fila, int columna){
    int minor[2][2];
    int value , column, row;
    //iterates over every position of the matrix
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            //if we are on the same column or the row as the 
            //factor we are evaluating then we skip
            if ( i == fila || j == columna){
                continue;
            }
            //with this conditionals we can determinate where
            //to put the value of the original matrix on the 
            //auxiliar 
            if ( j < columna){
                column = j;
            }
            if ( j > columna){
                column = j - 1;
            }
            if (i < fila){
                row = i;
            }
            if (i > fila){
                row = i -1;
            }
            //store the values where they correspond
            minor[row][column] = matriz[i][j];
        }
    }
    //just to see whats happening
    cout << "minor of " << "position " << fila << ", " << columna << endl;
    show_2x2(minor);
    return detM2x2(minor);
}
//return the determinant of a matrix 3x3 by calculating
//the cofactors and sending to the det_2x2 function to get 
//their determinats, after that multipliying it by -1 to the
//n so we can summate all and get the result
int determinant3x3(int matrix[3][3]){
    int temp, summ = 0;
    //choose a row to work with (it can be a either a column or a row)
    //we use row but the algorithm can be simply adapted to column
    int any = 0;
    //iterate over the row choosen 
    for (int i=0; i < 3; i++){
        //calculate the cofactor usign the determinant of the corresponding minor 
        temp = matrix[0][i] * det_minor(matrix, any, i);
        //since the result should be multiplied by -1 to the n factor 
        //(n = row + column), and then summate the results of every cofactor
        // we can express it in this way 
        if ((i + any) % 2 == 0){
            summ += temp;
        }else{
            summ -= temp;
        }
    }
    return summ;
}
int main(){
    int value, matrix[3][3];
    //fil all the values for a 3x3 matrix 
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << "what is the value of the matrix in the position (" << i << ", " << j << "): ";
            cin >> matrix[i][j];
        }
    }
    //print matrix 3x3
    desplegarMatriz(matrix);
    //calculate determinant of the matrix
    value = determinant3x3(matrix);
    //output the determinant 
    cout << "the determinant is: " << value << endl;
}
