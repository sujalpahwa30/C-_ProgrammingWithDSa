#include<iostream>
using namespace std;
// void generate(string s , int n) {
//     if(s.length() == n){
//         cout << s << endl;
//         return;
//     }
//     generate(s+'0' , n);
//     generate(s+'1' , n);
// }
// int main() {
//     int n = 3;
//     generate("" , n);
// }
// int n = 3;
// void generate(string s){
//    // if(s.length() == 0)
//       if(n == 0) {
//         cout << s << endl;
//         return;
//     } 
//     // generate(s+'0');
//     // generate(s+'1');
//      generate(s+'0' , n-1);
//      generate(s+'1' , n-1);
// }
// int main() {
//     generate("");
// }
void generate(string s , int n){
    if(n == 0){
        cout << s << endl;
        return;
    }
    generate(s+'0' , n-1);
    if(s == "" || s[s.length() - 1] == '0') generate(s+'1' , n-1);
}
int main() {
    int n = 3;
    generate("" , n);
}