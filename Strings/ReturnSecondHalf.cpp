#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    cout << "Enter a string : ";
    cin >> s;
    int n = s.length();
    cout << s.substr(n/2);
}