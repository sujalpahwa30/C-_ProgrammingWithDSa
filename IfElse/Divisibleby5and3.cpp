#include<iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter an integer : ";
    cin >> n;
    // if(n%5 == 0 && n%3 == 0){
    //     cout <<"The number is divisible by 5 and 3 .";
    // }
    // else{
    //     cout << "The number is not divisible by 5 and 3 .";
    // }

    if(n%5 == 0){
        if(n%3 == 0){
            cout << "Number is divisible by 5 and 3 .";
        }
        else{
            cout << "Number is divisible by 5 but not 3";
        }
    }
    else{
        cout << "Not matching the condition .";
    }
}