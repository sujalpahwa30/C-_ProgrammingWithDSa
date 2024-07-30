#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    if(str.size()%2 != 0) cout<<"Invalid input "<< endl;
    else{
        reverse(str.begin() + n/2, str.end());
        cout << str;
    }
}