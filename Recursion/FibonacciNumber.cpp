#include<iostream>
using namespace std;
int fibo(int n) {
    if(n == 1 || n == 2) return 1;
    int leftAns = fibo(n-1);
    int rightAns = fibo(n-2);
    return leftAns + rightAns;
    // return fibo(n-1) + fibo(n-2); 
}
int main() {
    cout << fibo(10);
}