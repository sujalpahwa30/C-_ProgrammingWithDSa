#include<iostream>
using namespace std;
int a = 1;   // Global Variable 
void fun(int x , int y) {
    cout << &x << endl;
    cout << &y << endl;  
}
void f(){
    cout << a;
}
int main() {
int a = 6;  // Local Variable 
    cout << a + 5 << endl;
    f();
}