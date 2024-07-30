#include<iostream>
using namespace std;
// -> Using For loop
// void factupto(int n) {
//     int f = 1;
//     for(int i = 1; i <= n; i++){
//         f *= i;
//         cout << f << endl;
//     }
// }
// int main() {
//     factupto(5);
// }

// -> Using Recursion
// int fact(int n) {
//     return n*fact(n-1);
// }
// int main() {
//     cout << fact(5);
// }
int fact(int n) {
    if(n == 1 || n == 0) return 1;  // Base Case 
    // return n*fact(n-1);         // Recursive Call
    int ans = n*fact(n-1);      // Kaam + Call 
    return ans;              // Return 

}
int main() {
    cout << fact(4);

}