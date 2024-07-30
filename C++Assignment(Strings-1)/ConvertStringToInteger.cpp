#include<iostream>
#include<string>
using namespace std;
int main() {
    string str;
    cin >> str;
    int val = 0, pro = 1;
    while(str.size()) {
        val += pro*(str.back() - '0');
        str.pop_back();
        pro *= 10;
    }
    cout << val;
}