#include<iostream>

using namespace std;

bool is_running = 1;
char value;
int m;
int i,j,k;
int sum;
void times() {
    cout <<  "¿Cuál es el numero de filas y columnas para la Matriz cuadrada A" << endl;
    cin >> m;
    if (m<1 || m>3){
        cout << "Ingresa un tamaño valido para la matriz (No mas de 3x3)\n";
        return ;
    }
    int matrix_A[m][m];
    for (i=0; i<m; i++){
        for (j=0; j<m; j++){
            cout << "¿Cuál es el valor de la matriz A en la posición (" << i << ", " << j << "): ";
            cin >> matrix_A[i][j];
        }
    }
    int value, result;
    // caso mas simple
    if (m==1){
        cout << "El determinante es " << matrix_A[0][0] << "\n";
        return ;
    //caso aun muy simple
    }else if(m==2){
        k = matrix_A[0][0] * matrix_A[1][1] - matrix_A[1][0] * matrix_A[0][1];
        cout << "El determinante es: " << k << "\n";
        return ;
    }
    // caso complicado xd 
    int determinant;
    int aux[2][2];
    sum = 0;
    //Desplegar matriz original just beacause
    cout << "Tu matriz es \n";
    for (i=0; i<m; i++){
        for (j=0; j<m; j++){
        cout << matrix_A[i][j] <<" ";
        }
        cout << "\n";
    }
    // obtener menores 
    for (k=0; k<3; k++){
        for (i=0; i<3; i++){
            for (j=0; j<3; j++){
                if (i==0 || j==k){
                    continue;
                }
                    //cout << "( "<< i << ", " << j << ")";
                    if (k==0){
                    // Elimina el caso mas sencillo, se escogio el valor (0,0)
                        aux[i-1][j-1] = matrix_A[i][j];
                    }else if (k== (m - 1)){
                    // Elimina el otro caso sencillo, se escogio el valor (-1,-1)
                        aux[i-1][j] = matrix_A[i][j];
                    }else if(j>k){
                    //se maneja el caso más "difícil", cuando se escoge un valor entre (0, -1), especificament cuando se el tiene que 
                    // restar uno a a las columnas para que coincida
                        aux[i-1][j-1] = matrix_A[i][j];
                        }else if(j<k){
                    //cout << "( "<<  i << ", " << j << ")";
                        aux[i-1][j] = matrix_A[i][j];
                        }
}
    }
    //desplegar la menor asi por que es fácil
    cout << "sub matriz " << matrix_A[0][k] << "-------\n" ;
    cout << aux[0][0] << " " << aux[0][1] << " \n" << aux[1][0] << " " << aux[1][1] << " \n";
    //calcular determinante 
    determinant = aux[0][0] * aux[1][1] - aux[1][0] * aux[0][1];
    if (k % 2 == 0){
    value = matrix_A[0][k];}
    else {
        value = matrix_A[0][k] * -1;
    }
    result = determinant * value;
    sum += result;
}
cout << "determinant = " << sum << endl;
}
//makes
int main(){
    while (is_running){
        times();
        cout << "do you wanna continue? (y/n): ";
        cin >> value;
        if (value == 'n'){
            is_running = 0;
        }
    }
}
