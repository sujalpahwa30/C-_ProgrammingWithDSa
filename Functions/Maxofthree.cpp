#include<iostream>
using namespace std;
int maxthree(int a , int b , int c) {
    if(a > b && a > c){
        return a;
    }
    else if(b > c && b > a){
        return b;
    }
    else return c;   //  A function may contain more than one return type 
}
int main() {
    int a = 10, b = 8, c = 9;
    cout << maxthree(a , b , c);
}