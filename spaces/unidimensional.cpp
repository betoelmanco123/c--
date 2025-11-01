#include<iostream>
#include<string>

using namespace std;

int main(){
    int num[2];      
    float dec[2];   
    char car[2];
    string tex[2];
    
    cout << "Ingresa primer num: ";
    cin >> num[0];
    cout << "Ingresa segundo num: ";
    cin >> num[1];
    
    cout << "Ingresa primer dec: ";
    cin >> dec[0];
    cout << "Ingresa segundo dec: ";
    cin >> dec[1];
    
    cout << "Ingresa primer char: ";
    cin >> car[0];
    cout << "Ingresa segundo char: ";
    cin >> car[1];
    
    cout << "Ingresa primer tex: ";
    cin >> tex[0];
    cout << "Ingresa segundo tex: ";
    cin >> tex[1];
    
    cout << "------" << endl;
    cout << "Direccion num: " << &num[0] << endl;
    cout << "Valor num: " << num[0] << endl;
    cout << "Direccion num 2: " << &num[1] << endl;
    cout << "Tamaño dato: " << 4 << " bits" << endl;
    
    cout << "------" << endl;
    cout << "Direccion dec: " << &dec[0] << endl;
    cout << "Valor dec: " << dec[0] << endl;
    cout << "Direccion dec 2: " << &dec[1] << endl;
    cout << "Tamaño dato: " << 4 << " bits" << endl;
    
    cout << "------" << endl;
    cout << "Valor car: " << car[0] << endl;
    cout << "Direccion car: " << &car[0] << endl;
    cout << "Direccion car 2: " << &car[1] << endl;
    cout << "Tamaño dato: " << 8 << " bits" << endl;
    
    cout << "----" << endl;
    cout << "Valor tex: " << tex[0] << endl;
    cout << "Direccion tex: " << &tex[0] << endl;
    cout << "Direccion tex 2: " << &tex[1] << endl;
    cout << "Tamaño dato: " << 32 << " bits" << endl;
    
    cout << "------" << endl;
    return 0;
}