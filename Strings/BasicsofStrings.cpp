#include<iostream>
#include<string>    // Header File for using a string 
using namespace std;
int main() {
    // char str[5] = {'a','b','c','d','e'};
    // for(int i = 0; i < 5; i++){
    //     cout << str[i] << " ";
    // }
    // cout << endl;
    // char ch = '\0';
    // cout << ch << endl;
    // cout << (int)ch;
    // char str[] = {'a','b','c','d','e'};
    // for(int i = 0; str[i] != '\0'; i++){
    //     cout << str[i] << " ";
    // }
    // cout << str;

    // string str = "sujal pahwa";
    // cout << str;
    // string s;
    // cin >> s;   // works only if the given string has no spaces 
    // cout << s;

    // string s;
    // getline(cin , s);   // Used for taking input a entire line 
    // cout << s;

    // string s = "sujal";
    // cout << s[0];   // Indexing of characters

    string str = "sujal";   // Updation of single character in a string 
    cout << str << endl;
    str[1] = 'e';
    cout << str;     // In C++ strings are mutable 
}