#include<iostream>
using namespace std;
// -> Extra Parameter 
// void print( int i , int n) {
//     if(i > n) return;
//     cout << i << endl;
//     print(i+1 , n);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << endl;
//     print(1,n);
// }

// -> After Recursive Call 
void print(int n){
    if(n == 0) return;    // Base Case 
    print(n-1);           // Call 
    cout << n << endl;     // Kaam 
}
int main() {
    print(10);
}