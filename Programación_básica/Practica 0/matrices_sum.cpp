#include<iostream> //Import the libraries

using namespace std; // Command that allows me to avoid writing std::

int main() { // Main function
	int i,j,k,m,n; //Initialize variables
	int	matrices[3][3][3]; // Initialize the array that will store the matrices 
	for (k=0; k<2; k++) { //Create a loop that will iterate over each matrix
		for (i=0; i<3; i++) { //Create a loop that will iterate over each column
			for (j=0; j<3; j++) { //Create a loop that will iterate over each row
				cout << "What is the value of matrix " << k + 1 << " at position (" << i << "," << j << ")? "; //Ask for the value at position (i,j) of matrix k+1 (to avoid having matrix0)
				cin >> matrices[k][i][j]; //Receive the value from the user and assign it to the matrix in the corresponding position
			}
		}
	}
	for (m=0; m<3; m++){ // Create a loop that will go through the columns
		for (n=0; n<3; n++){ //Create a loop that will iterate over each row
			matrices[2][m][n] = matrices[0][m][n] + matrices[1][m][n]; //Add the values at positions m and n and store them in position (m,n) of the resulting matrix
			cout << matrices[2][m][n] << " "; //Display the value along with a space to show the result
		}
		cout << endl; //Display line breaks to separate rows and columns
	}
	return 0; //End the program
}
