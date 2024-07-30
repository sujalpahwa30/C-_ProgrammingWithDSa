#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n; 
    // if(n%2 == 0){
    //     cout << "Even";
    // } 
    // // if(n%2 != 0){
    // //     cout << "Odd";
    // // }
    // else{
    //     cout << "Odd";
    // }
          // Divisible by 5 or not 
    if(n%5 == 0){
        cout << "Divisible by 5";
    }
    else{
        cout << "Not divisible by 5";
    }
}