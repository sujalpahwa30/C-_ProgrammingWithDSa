#include<iostream>
using namespace std;   // Function Calling Itself -> Recursion 
// void fun() {
//     cout << "Hello PW" << endl;
//     fun();
// }
// int main() {
//     fun();
// }
// void fun(int n) {
//     if(n == 0) return;
//     cout << "Hello PW" << endl;
//     fun(n-1);
// }
// int main() {
//     fun(5);
// }
void greet(int n) {    // User Input 
    if(n == 0) return;
    cout << "Good Morning !" << endl;
    greet(n-1);
}
int main() {
    int n;
    cout << "Enter an number : ";
    cin >> n;
    greet(n);
}