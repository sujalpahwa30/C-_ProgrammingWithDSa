#include<iostream>
#include<vector>
#include<algorithm>
#define inf INT_MAX
using namespace std;
// int f(int n){
//     if(n == 1) return 0;
//     if(n == 2 or n == 3) return 1;
//     return 1 + min({f(n-1) , (n % 2 == 0) ? f(n/2) : inf , (n % 3 == 0) ? f(n/3) : inf});
// }
// int main(){
//     int n;
//     cin >> n;
//     cout << f(n) << endl;
// }

// vector<int>dp;
// int ftd(int n){
//     if(n == 1) return 0;
//     if(n == 2 or n == 3) return 1;
//     if(dp[n] != -1) return dp[n];
//     return dp[n] = 1 + min({ftd(n-1) , (n % 2 == 0) ? ftd(n/2) : inf , (n % 3 == 0) ? ftd(n/3) : inf});
// }
// int main(){
//     int n;
//     cin >> n;
//     dp.clear();
//     dp.resize(1005 , -1);
//     cout << ftd(n) << endl;
// }

vector<int>dp;
int fbu(int n){
    dp.clear();
    dp.resize(n+1 , -1);
    dp[1] = 0;
    dp[2] = dp[3] = 1;
    for(int i = 4; i <= n; i++){
        dp[i] = 1 + min({dp[i-1] , (i % 2 == 0) ? dp[i/2] : inf , (i % 3 == 0) ? dp[i/3] : inf});
    }
    return dp[n];
}
int main(){
    int n;
    cin >> n;
    cout << fbu(n) << endl;
}