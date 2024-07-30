#include<iostream>
using namespace std;    // Swap two numbers -> Incorrect 
void swap(int a , int b) {
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main() {
    int a , b;
    cin >> a >> b;
    swap(a , b);
    cout << a << " " << b;
}