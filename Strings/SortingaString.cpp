#include<iostream>
#include<string>
#include<algorithm>   // Sorting is done lexographically i.e. a,b,c....x,y,z  
using namespace std;   // It is done in the order of ASCII values 
int main() {
    string s;
    cin >> s;
    sort(s.begin() , s.end());
    cout << s;
}