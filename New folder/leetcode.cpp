#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s = "sujal";
    cout << s << endl;
    reverse(s.begin() , s.end());
    cout << s << endl;
     s = "sujal pahwa";
    cout << s << endl;
    reverse(s.begin() , s.end());
    cout << s << endl;
    for(int i = 0; s[i] != '\0'; i++){
         cout << s[i] << " ";
        break;
    }
    // for(int i = s.length()-1; i >= 0; i--){
    //     cout << s << endl;
    //     break;
    // }

    // for(int i = 0; i < 5; i++){
    //     cout << i << endl;
    // }
    // for(int i = 5; i > 0; i--){
    //     cout << i << endl;
    // }
}