#include <iostream> //The library that allows to store and use information is inserted
using namespace std; //This fuction is used to avoid writing std:: in every line of code
//Global variables are declared
int m=0;
int n=0;
bool triangular=0;

//The main cicle is started
	int main(){
	bool triangular = 0;
	
	cout<<"Index the amount of rows for the matrix:\n"; //A message is deployed and the valio inserted by the user is stored
	cin>>m;
	cout<<"Index the amount of columns for the matrix:\n";//A message is deployed and the valio inserted by the user is stored
	cin>>n;

	int A[m][n];
	
	//The values of the matrix are stored by their position
	cout<<"Enter the values for the matrix:\n";
	for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) {
            cout << "Valor [" << i << "][" << j << "]: ";
            cin >> A[i][j];       
		}
	}
	
	//This cicle reviews if the results are true or false
	for (int i = 0; i < m; i++){
		for ( int j = 0; j < n; j++){
			if (i<j||i>j){
				if(A[i][j]==0){
					triangular = 1;	
				}
			}
		}
	}
	
	if(triangular){
		for (int i = 0; i < m; i++){
			for ( int j = 0; j < n; j++){
				if (i<j){
					if(A[i][j]!=0){
						cout<<"The matrix is inferior triangular.";
					}
						else{
							cout<<"The matrix is superior triangular";
					}
				}
			}
		}
		
	}
	else{
			cout<<"The matrix is not triangular";
		}

}