#include<iostream>
using namespace std;
// int hcf(int a , int b){
//     for(int i = min(a , b); i >= 2; i--){
//         if(a % i == 0 && b % i == 0) return i;
//     }
//     return 1;
// }
// int main() {   // T.C. = O(min(a , b))   -> Not better
//     int a = 45;
//     int b = 15;
//     cout << hcf(a , b);
// }
int gcd(int a , int b){
    if(a == 0) return b;
    else return gcd(b%a , a);
}
int main() {      // T.C. = O(log(a+b))   ->  Much better/Best 
    int a = 15;
    int b = 45;
    cout << gcd(a , b);   // gcd(a , b) = gcd(b , a)
}