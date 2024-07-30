#include<iostream>
using namespace std;
int factorial(int n){
    // if(n == 0) return 1;
    // int i = n , fact = 1;
    // while(n/i != n){
    //     fact = fact*i;
    //     i--;
    // }
    // return fact;
    int f = 1;
    for(int i = 1; i <= n; i++){
        f *= i;
    }
    return f;
}
int main(){
    int n = 5;
    cout << "Factorial of " << n << " is " << factorial(n);
}