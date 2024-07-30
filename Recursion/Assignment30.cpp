#include<iostream>
#include<vector>
#include<string>
using namespace std;
// void DtoB(vector<int>& v , int n){
//     if(n == 0) return;
//     DtoB(v , n/2);
//     v.push_back(n % 2);
// }
// int main() {
//     int n;
//     cin >> n;
//     vector<int>v;
//     DtoB(v , n);
//     for(int i = 0; i < v.size(); i++){
//         cout << v[i];
//     }
// }

// int fact(int n) {
//     if(n == 0) return 1;
//     return n*fact(n-1);
// }
// int main() {
//     int n;
//     cin >> n;
//      cout << fact(n);
// }


// using namespace std;
// int longestCommonSubstring(string &a, string &b, int idxA, int idxB) {
// if(idxA == a.size() || idxB == b.size()) {
// return 0;
// }
// if(a[idxA] == b[idxB]) {
// return 1 + longestCommonSubstring(a, b, idxA+1, idxB+1);
// }
// return max(longestCommonSubstring(a, b, idxA+1, idxB), longestCommonSubstring(a,
// b, idxA, idxB+1));
// }
// int main() {
// string a, b;
// cin >> a >> b;
// int ans = longestCommonSubstring(a, b, 0, 0);
// cout << ans << endl;
// return 0;
// }

int substring(string &a , string &b , int idxA , int idxB){
    if(idxA == a.size() || idxB == b.size()) {
        return 0;
    }
    if(a[idxA] == b[idxB]) {
        return 1 + substring(a , b , idxA+1 , idxB+1);
    }
    return max(substring(a , b ,idxA+1 , idxB) , substring(a , b , idxA , idxB+1));
}
int main() {
    string a , b;
    cin >> a >> b;
    int ans = substring(a , b , 0 , 0);
    cout << ans << endl;
}
  