#include<iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);

}

int main(){

    int name = factorial(5);
    cout << name << endl;
    return 0;
}