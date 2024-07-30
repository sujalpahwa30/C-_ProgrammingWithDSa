#include<iostream>
#include<vector>
using namespace std;
#define mod 1000000007
#define ll long long int
vector<int>dp(1000005 , -1);
ll f(int n){
    if(n == 0) return 1;
    if(dp[n] != -1) return dp[n];
    ll sum = 0;
    for(int i = 1; i <= 6; i++){
        if(n - i < 0) break;
        sum = (sum % mod + f(n-i) % mod) % mod;
    }
    return dp[n] = sum % mod;
}
ll fbu(int n){
    dp[0] = 1;
    for(int k = 1; k <= n; k++){
        ll sum = 0;
        for(int i = 1; i <= 6; i++){
            if(k-i < 0) break;
            sum = (sum % mod + dp[k-i] % mod) % mod;
        }
        dp[k] = sum % mod;
    }
    return dp[n];
}
int main(){
    int n;
    cin >> n;
    dp.clear();
    dp.resize(1000005 , -1);
    cout << f(n) << endl;
    cout << fbu(n) << endl;
}