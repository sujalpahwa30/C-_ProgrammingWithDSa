#include<iostream>
using namespace std;
int main() {
    int x = 3;
    int* ptr = &x;
    int** p = & ptr;
 //   int*** q = & p;
    cout << x << endl;
    cout << ptr << endl;
    cout << p << endl;
    cout << *ptr << endl;
    cout << **p << endl;
  //  cout << q << endl;
    //cout << ***q << endl;
}