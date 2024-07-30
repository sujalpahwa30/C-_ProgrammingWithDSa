#include<iostream>
#include<vector>
using namespace std;
// int f(int n){  // # Recursive Solution 
//     if(n == 0 or n == 1) return n;   
//     return f(n-1) + f(n-2);
// }
// int main(){   // T.C. = O(2^n)  ,  S.C. = O(n)
//     cout << f(6);
// }

// vector<int>dp;  // DP Solution -> Optimised solution
// int f(int n){      // Top Down DP -> Recursive solution
//     if(n == 0 or n == 1) return n;
//     // dp check , to identify if problem was already solved earlier 
//     if(dp[n] != -1) return dp[n];
//     return dp[n] = f(n-1) + f(n-2); // storing ans 
// }
// int main(){   // T.C. = O(n)  ,  S.C. = O(n)
//     int n;
//     cin >> n;
//     dp.clear();
//     dp.resize(n+1 , -1); // dp[i] == -1 -> that ith subproblem is not yet completed
//     cout << f(n) << endl;
// }

// vector<int>dp;  // Bottom Up -> Iterative solution 
// int f(int n){
//     dp.clear();
//     dp.resize(n+1 , -1);
//     dp[0] = 0;
//     dp[1] = 1;
//     for(int i = 2; i <= n; i++){
//         dp[i] = dp[i-1] + dp[i-2];
//     }
//     return dp[n];
// }
// int main(){    // T.C. = O(n)  ,  S.C. = O(n)
//     int n;
//     cin >> n;
//     cout << f(n) << endl;
// }

vector<int>dp;  // Space Optimization in bottom up 
int f(int n){
    int a = 0;
    int b = 1;
    if(n == 0 or n == 1) return n;
    int c;
    int i = 2;
    while(i <= n){
        c = a+b;
        a = b;
        b = c;
        i++;
    }
    return c;    
}
int main(){    // T.C. = O(n)  ,  S.C. = O(1)
    int n;
    cin >> n;
    cout << f(n) << endl;
}