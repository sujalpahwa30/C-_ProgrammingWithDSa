#include<iostream>
using namespace std;
int main() {
    int arr[5];
    cout << &arr << endl;
    cout << &arr[0] << endl;   // Address of first element and array is always same 
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;    // Continuous Memory Allocation 
}