#include<iostream>//Importa las biblilotecas

using namespace std;// Comando que me permite ignorar el escribir std::

int main() { // Funcion principal

	int i,j,k,m,n; //Inicializamos las variables
	int	matrices[2][3][3]; // Inicializamos la matriz que almacenara las matrices
	for (k=0; k<2; k++) { //Creamos un bucle que iterara sobre cada matriz
		for (i=0; i<3; i++) { //Creamos un bucle que iterara sobre cada columna
			for (j=0; j<3; j++) { //Creamos un bucle que iterara sobre cada fila
				cout << "¿Cual es el valor de la matriz "<< k + 1 << " para la posicion (" << i << "," << j<< ")" ;//Pregutamos el valor en la posicion (i,j) de la matriz k +1 (para evitar tener matriz0)
				cin >> matrices[k][i][j];//Recibimos el valor del usuario y lo asignamos a la matriz en la posicion correspondiente
			}
		}
}

	for (m=0; m<3; m++){ // Creamos un bucle que recorrera las columnas
		for (n=0; n<3; n++){ //Creamos un bucle que iterara sobre cada fila
			if (matrices[0][m][n] != matrices[1][m][n]) {//Comprobamos si la posicion (m,n) de la matriz 1 es distinta de la misma que la de la matriz 2
				cout << "Las matrices no son iguales";//Comunicamos que las matrices no son iguales
				return 0;//Terminamos el progama cuando dos valores difieren
			
			}
		}
	}
	cout << "Las matrices son iguales";// Si el programa no se termino antes, entonces las matrices son iguales y se lo comunicamos al usuario 
	return 0;//Terminamos el programa
}