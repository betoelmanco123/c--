#include<iostream>

using namespace std;

int m;//size
int j,i;//index
int value;

int determinant() {
    cout << "enter the dimensions for your square matrix: " ; 
    cin >> m;
    int matriz[m][m];
    if (m < 1 || m > 3){
        cout << "enter a value between 1-3: ";
        return 0;
        }
    for (i=0; i<m; i++){
        for (j=0; j<m; j++){
            cout << "whats the value of your matrix on the position ( " << i << ", " << j << "): " ;
            cin >> matriz[i][j];
        }
    }
    if (m==1){
        value = matriz[0][0] ;
    }else if(m==2){
        value = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
    }else{
        value =  matriz[0][0] * (matriz[1][1]*matriz[2][2] - matriz[1][2]*matriz[2][1])
    - matriz[0][1] * (matriz[1][0]*matriz[2][2] - matriz[1][2]*matriz[2][0])
    + matriz[0][2] * (matriz[1][0]*matriz[2][1] - matriz[1][1]*matriz[2][0]);
}
cout << "the determinant is " << value << endl;
return 0;
    }

int main(){
    bool foll = 1;
    char value;
    while (foll){
        determinant();
        cout << "do you wanna continue? (y/n) :";
        cin >> value;
        if (value == 'n'){
            foll = 0;
        }
    }
}

    
