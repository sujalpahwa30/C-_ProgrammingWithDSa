#include<iostream>
using namespace std;
int main () {
    // int x;    // Take integer as input and print half of the number
    // cin >> x;
    // float y = (float)x;
    // cout << y/2;

    float x;   // Take float input and print the fractional part of the real number 
    cin >> x;
    int y = (int)x;
    if (y<0) y=y-1;
    float z = (float)y;
    x = x - z;
    cout << x;
}