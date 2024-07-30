#include<iostream>
using namespace std;
int main() {
//     int x = 7;
//     int* ptr = &x;
//     cout << ptr << endl;
//   //  ptr = ptr + 1;
//   //  ptr++;
//    // ptr--;
//    // *ptr = *ptr + 1;
//   // (*ptr)++;
//     cout << ptr << endl;
//     cout << *ptr << endl;

    //  int x = 4;
    //  int* ptr = &x;
    //  cout << *ptr << endl;
    //  ptr = ptr + 1;
    //  cout << ptr << endl;

      int a = 15;
      int* ptr = &a;
      int b = ++(*ptr);
      cout << a << " " << b;
}