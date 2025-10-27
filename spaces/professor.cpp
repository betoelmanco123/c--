#include <iostream>  	//Despliegue e ingreso de datos por la consola

using namespace std;	

int main(){
	int i=3;
	int j=3;
	int detM;
	int M[i][j];
	int MenorM[i-1][j-1];
	
	for(int x=0;x<i;x++){
		for(int y=0;y<j;y++){
			cout<<"Dame el valor de elemento "<< x+1 <<" "<<y+1 << ": ";
			cin>>M[x][y];
		}
	}

	for(int x=0;x<i;x++){			//desplegar M
		cout<<"| ";
		for(int y=0;y<j;y++){
			cout<<M[x][y]<<" ";
		}
		cout << "|"<<endl;
	}

	int filaM;
	cout<< "Dame la fila del menor deseado: ";
	cin >>filaM;
	
	int columnaM;
	cout<< "Dame la columna del menor deseado: ";
	cin >>columnaM;
		
	for(int x=0;x<i;x++){			//menor del elemento que elija el usuario
		for(int y=0;y<j;y++){
			if(x!=filaM){
				if(y!=columnaM){
					if (x<filaM){
						if(y<columnaM){
							MenorM[x][y]=M[x][y];
						}
						else {
							MenorM[x][y-1]=M[x][y];
						}
					}
					else {
						if(y<columnaM){
							MenorM[x-1][y]=M[x][y];
						}
						else {
							MenorM[x-1][y-1]=M[x][y];
						}
					}

				}
			}
		}
	}

	for(int x=0;x<i-1;x++){			//desplegar menor deseado
		cout<<"| ";
		for(int y=0;y<j-1;y++){
			cout<<MenorM[x][y]<<" ";
		}
		cout << "|"<<endl;
	}	
}