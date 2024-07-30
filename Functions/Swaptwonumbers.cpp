#include<iostream>
using namespace std;
int main() {
    int a , b;
    cin >> a >> b;
//     // a = b;
//     // b = a;
//     // cout << a << " " << b;


//     // int temp = a;    //  -> Using extra variable 
//     // a = b;
//     // b = temp;
//     // cout << a << " " << b;


    a = a + b;     //  -> Without using extra variable 
    b = a - b;
    a = a - b;
    cout << a << " " << b;
} 
// void swap(int a , int b) {
//     int temp = a;
//     a = b;
//     b = temp;    // -> by using functions 
//     return;      // -> This doesn't work 
// }


//     int main() {
//         int a , b;
//         cin >> a >> b;
//         swap(a , b);
//         cout << a << " " << b;
//     }