#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter an integer : ";
    cin >> n;
    if(n%5 == 0 || n%3 == 0){
        cout << "The number is divisible by 5 or 3 .";
    }
    else{
        cout << "The number is not divisible by 5 or 3 .";
    }
}