#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the arrays: ";
    cin >> n;
    int A[n];
    int result = 0;
    for (int i = 0; i<n; i++) {
        cout << "Enter element " << i + 1 << " of array A: ";
        cin >> A[i];
        result += A[i];
    
    }
    cout << "The sum of the elements in array A is: " << result << endl;
    return 0;
}