#include<iostream>
using namespace std;
// int findSum(int a ,int b) {
//     if(a > b) return 0;
//     if(a % 2 == 0) return findSum(a+1 , b);
//     return a + findSum(a+2 , b);
// }
// int main() {
//     cout << findSum(1 , 10);
// }



// int stair(int n) {
//     if(n == 3) return 4;
//     if(n == 2) return 2;
//     if(n == 1) return 1;
//     return stair(n-1) + stair(n-2) + stair(n-3);
// }
// int main() {
//     cout << stair(6);
// }

bool power(int n){ 
    if(n == 1) return true;
    if(n % 2 == 0) return power(n/2);
    return false;
}
int main() {
    int n;
    cin >> n;
    if(power(n)) cout << "Yes" << endl;
    else cout << "No" << endl;
}