#include<iostream>

using namespace std;

int main(){
int m, n, q, p; //Tamaños
	int i, j; //Indices
	int k; //ariable de acople

	//Definir los tamaños de la matriz A y matriz B
	cout<<"Tamaños de la matriz A"<<endl;
	cout<<"Filas:";
	cin>> m;
	cout<<"Columnas:";
	cin>> n;
	
	cout<<"Tamaño de la matriz B"<<endl;
	cout<<"Filas:";
	cin>> q;
	cout<<"Columnas:";
	cin>> p;
	
	//Verificar si el numero de columnas de A con numero de filas de B coinciden
	if (n==q){
		cout<<"Si se puede multiplicar"<<endl;
	 	
    int A[m][n];
	int B[q][p];
	
	//Ingresar los valores de la matriz A
	cout<<"Ingresa los valores de la matriz A"<<endl;
	for(i=0; i<m; i++){
		
		for(j=0; j<n; j++){

			cout<<"Cual es el valor en la posicion"<<"["<<i<<"]""["<<j<<"]"<<endl;
			cin>>A[i][j];
	
			
		}
	}
	
	//Ingresar los valores de la matriz B
	cout<<"Ingresa los valores de la matriz B"<<endl;
	for(i=0; i<q; i++){
		
		for(j=0; j<p; j++){
			
			cout<<"Cual es el valor en la posicion"<<"["<<i<<"]""["<<j<<"]"<<endl;
			cin>>B[i][j];
		}
	}
	
	//Multiplicacion de ambas matrices
	int AB[i][j];
	for(i=0; i<m; i++){
		for(j=0; j<p; j++){
			AB[i][j]=0;
			
			
			for(k=0; k<n; k++){
				AB[i][j]+=AB[i][j]+A[i][k]*B[k][j];
			}
		}
	}
	
	//Arrojar resultado
	for(i=0; i<m; i++){
		for(j=0; j<p; j++){
			cout<<AB[i][j]<<endl;
		}
		
	}
		
	}else{
		cout<<"No se puede multiplicar"<<endl;
	}
	
	
	
}