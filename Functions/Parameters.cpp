#include<iostream>
using namespace std;
void fun(int x , int y) {  // Formal Parameters
    cout << &x << endl;
    cout << &y << endl;    // Actual address
}
int main() {
    int x = 3;
    int y = 5;
    cout << x << endl;   
    cout << y << endl;
    fun(x , y);    // Actual Parameters
}