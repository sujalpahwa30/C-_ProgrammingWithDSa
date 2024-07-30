#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s = "physicswallah";
    string t = "wallahphysics";
    sort(s.begin() , s.end());
    sort(t.begin() , s.end());
    if(s == t) cout << true;
    else cout << false;
}