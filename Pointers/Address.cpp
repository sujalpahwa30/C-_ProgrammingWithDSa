#include<iostream>
using namespace std;
// int main() {
//     int x = 4;
//     // cout << sizeof(int) << endl;  // -> 4 bytes
//     // cout << sizeof(char) << endl;  // -> 1 bytes
//     // cout << sizeof(float) << endl;  // -> 4 bytes
//     // cout << sizeof(bool) << endl;   // -> 1 bytes

//      cout << &x; // 0x8ea17ff63c   -> Address of x 
// }


   int main()  {  // A way to store addresses -> Pointers 
    // int x = 4;
    // int* p = &x;
    // cout << &x << endl;
    // cout << p;

    float x = 4.7;
    float* ptr = &x;
    cout << &x << endl;
    cout << x << endl;
    cout << ptr << endl;
   }