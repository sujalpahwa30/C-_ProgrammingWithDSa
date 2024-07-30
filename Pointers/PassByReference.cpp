#include<iostream>
using namespace std;     // Swap two numbers -> Correct 
void swap(int* x , int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;   // Reference -> Address
    return;
}
int main() {
    // int a , b;
    // cin >> a >> b;
    // swap(&a , &b);
    // cout << a << " " << b;

       int a , b;
       cin >> a >> b;
       int* x = &a;
       int* y = &b;
       swap(x , y);
       cout << a << " " << b;
}