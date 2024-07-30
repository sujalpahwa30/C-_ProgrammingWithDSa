// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n == 0 || n == 1) return 1;
//     return n*fact(n-1);
// }
// int trailingZeroes(int n){
//     int ans = fact(n);
//     int count = 0;
//     while(ans % 10 == 0){
//         count++;
//         ans /= 10;
//     }
//     return count;
// }
// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     cout << trailingZeroes(n);
// }
#include<iostream>
using namespace std;
int trailingZeroes(int n){
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }
    return count;
}
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << trailingZeroes(n);
}



// 6,22,70,20,800        36,28,800