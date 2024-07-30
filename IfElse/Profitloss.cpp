#include<iostream>
using namespace std;
int main() {
    int sp;
    cout << "Enter the Selling Price : ";
    cin >> sp;
    int cp;
    cout << "Enter the Cost Price : ";
    cin >> cp;
    if(sp>cp){
        cout <<"Profit = "<< sp - cp;
    }
    if(sp<cp){
        cout <<"Loss = "<< cp - sp;
    }
    if(sp == cp){
        cout <<"No profit No loss ";
    }
}