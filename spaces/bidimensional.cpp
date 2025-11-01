#include<iostream>
#include<string>

using namespace std;

int main(){
    int num[2][2];      
    float dec[2][2];   
    char car[2][2];
    string tex[2][2];
    
    cout << "Ingresa num[0][0]: ";
    cin >> num[0][0];
    cout << "Ingresa num[0][1]: ";
    cin >> num[0][1];
    cout << "Ingresa num[1][0]: ";
    cin >> num[1][0];
    cout << "Ingresa num[1][1]: ";
    cin >> num[1][1];
    
    cout << "Ingresa dec[0][0]: ";
    cin >> dec[0][0];
    cout << "Ingresa dec[0][1]: ";
    cin >> dec[0][1];
    cout << "Ingresa dec[1][0]: ";
    cin >> dec[1][0];
    cout << "Ingresa dec[1][1]: ";
    cin >> dec[1][1];
    
    cout << "Ingresa car[0][0]: ";
    cin >> car[0][0];
    cout << "Ingresa car[0][1]: ";
    cin >> car[0][1];
    cout << "Ingresa car[1][0]: ";
    cin >> car[1][0];
    cout << "Ingresa car[1][1]: ";
    cin >> car[1][1];
    
    cout << "Ingresa tex[0][0]: ";
    cin >> tex[0][0];
    cout << "Ingresa tex[0][1]: ";
    cin >> tex[0][1];
    cout << "Ingresa tex[1][0]: ";
    cin >> tex[1][0];
    cout << "Ingresa tex[1][1]: ";
    cin >> tex[1][1];
    
    cout << "Direccion num: " << &num[0][0] << endl;
    cout << "Valor num: " << num[0][0] << endl;
    cout << "Direccion num: " << &num[0][1] << endl;
    cout << "Direccion num: " << &num[1][0] << endl;
    cout << "Direccion num: " << &num[1][1] << endl;
    cout << "tamaño del tipo de dato: " << 4 << " bits" << endl;
    
    cout << "Valor dec: " << dec[0][0] << endl;
    cout << "directions----" << endl;
    cout << "Direccion dec: " << &dec[0][0] << endl;
    cout << "Direccion dec: " << &dec[0][1] << endl;
    cout << "Direccion dec: " << &dec[1][0] << endl;
    cout << "Direccion dec: " << &dec[1][1] << endl;
    cout << "tamaño del tipo de dato: " << 4 << " bits" << endl;
    
    cout << "------" << endl;
    cout << "Valor car: " << car[0][0] << endl;
    cout << "Direccion car: " << &car[0][0] << endl;
    cout << "Direccion car: " << &car[0][1] << endl;
    cout << "Direccion car: " << &car[1][0] << endl;
    cout << "Direccion car: " << &car[1][1] << endl;
    cout << "tamaño del tipo de dato: " << 8 << " bits" << endl;
    
    cout << "----" << endl;
    cout << "Valor tex: " << tex[0][0] << endl;
    cout << "Direccion tex: " << &tex[0][0] << endl;
    cout << "Direccion tex: " << &tex[0][1] << endl;
    cout << "Direccion tex: " << &tex[1][0] << endl;
    cout << "Direccion tex: " << &tex[1][1] << endl;
    cout << "tamaño del tipo de dato: " << 32 << " bits" << endl;

    return 0;
}