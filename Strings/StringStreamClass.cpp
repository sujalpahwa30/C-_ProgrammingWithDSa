#include<iostream>
#include<string>
#include<sstream>      // Header file for using string stream class 
using namespace std;    // Spilt every single word of the sentence and print it in a new line 
int main() {
    string str = "i am doing dsa";
    stringstream ss(str);
    string temp;
    while(ss >> temp){
        cout << temp << endl;
    }
}