#include<iostream>
#include<string>
#include<algorithm>   // Header file for using inbuilt functions like sort , reverse 
using namespace std;
int main() {
    // string str = "sujal pahwa is doing DSA";
    // cout << str.length();
    // cout << str.size();   // both are same

    // string str = "abcd";
    // cout << str << endl;
    // str.push_back('e');
    // str.push_back('f');
    // cout << str << endl;

    // string s = "sujal";
    // cout << s << endl;
    // s.pop_back();
    // s.pop_back();
    // cout << s << endl; 

//     string s = "abc";
//     cout << s << endl;
//     // string t = "def";
//     // s = s+t;   // s = s+"def"
//    // s = s+"123";
//    s = "xyz" + s;
//     cout << s << endl;

     string s = "abcdef";
     cout << s << endl;
     reverse(s.begin() , s.end());
     cout << s << endl;
     reverse(s.begin()+2 , s.end()-1);
   // reverse(s.begin()+2 , s.begin()+5);
     cout << s << endl;

    //   string s = "abcdefg";    // Substring 
    //   cout << s << endl;
    //   cout << s.substr(1) << endl;
    //   cout << s.substr(2,2);

    // int x = 12345;
    // string s = to_string(x);
    // cout << s;
}