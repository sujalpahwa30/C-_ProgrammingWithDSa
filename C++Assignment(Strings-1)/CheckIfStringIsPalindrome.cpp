#include<iostream>
#include<string>
using namespace std;
bool checkPalindrome(string &s) {
    int i = 0, j = s.size() - 1;
    while (i <= j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    cout << checkPalindrome(str);
}