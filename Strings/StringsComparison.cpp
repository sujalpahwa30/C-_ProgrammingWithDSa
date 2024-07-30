#include<iostream>
#include<string>
using namespace std;
int main() {
    string s = "azyb";
    string t = "azyb";
    cout << s.compare(t);

    // 0 if s == t
    // +ve if s > t
    // -ve if s < t
}