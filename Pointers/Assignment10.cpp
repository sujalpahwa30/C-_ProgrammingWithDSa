#include<iostream>
using namespace std;
int main() {
    // int a , b;
    // int* ptr1 = &a;
    // int* ptr2 = &b;
    // cout << "Enter first number : ";
    // cin >> *ptr1;
    // cout << "Enter second number : ";
    // cin >> *ptr2;
    // cout << (*ptr1) * (*ptr2);

    // int *p , q;  -> p is a pointer and q is an integer


    int a = 10 , b = 20;
    int *ptr = &a;
    b = *ptr + 1;
    ptr = &b;
    cout << *ptr << " " << a << " " << endl;

    


}