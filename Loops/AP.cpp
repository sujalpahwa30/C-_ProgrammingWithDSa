#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    // for(int i = 1; i <= 2*n-1; i+=2)
    // cout << i << endl;

    // int a = 1;
    // for(int i = 1; i <= n; i++) 
    // cout << a << endl;
    // a = a + 2;

    for(int i = 1; i <= n; i+=2)
    cout << i << endl;
}