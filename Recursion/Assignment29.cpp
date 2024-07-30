#include<iostream>
using namespace std;
void reverse(int n , int ans){
    if(n == 0) return;
    int digit = n%10;
    ans = ans + digit * 10;
    reverse(n/10 , ans);
}
int main() {
    int n;
    cin >> n;
    int ans = 0;
    reverse(n , ans);
    cout << ans << endl;
}