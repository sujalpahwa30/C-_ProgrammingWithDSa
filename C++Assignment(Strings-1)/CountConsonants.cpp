#include<iostream>
#include<string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i'){
            count++;
            }
        }
    cout << n - count;
}