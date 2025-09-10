#include<iostream>//Importa las biblilotecas

using namespace std;// Comando que me permite ignorar el escribir std::

int main () {

    int matriz[2];
    int matrizcharacter[2];
    char caracter1 = 'a';
    char caracter2 = 'b';

    matrizcharacter[0] = caracter1;
    matrizcharacter[1] = caracter2;
    matriz[0] = 20;
    matriz[1] = 30;
    int *p1 = &matriz[0];
    int *p2 = &matriz[1];
    cout << "valores para int " << endl;
    cout << "Valor de p1: " << p1 << endl;
    cout << "Valor de p2: " << p2 << endl;
    cout << "valores para ichar" << endl;
}
