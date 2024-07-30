#include<iostream>
#include<string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    for(int i = 1; i < str.size(); i += 2) {
        str[i] = '#';
    }
    cout << str;
}