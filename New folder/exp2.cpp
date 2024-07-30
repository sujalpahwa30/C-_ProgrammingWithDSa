#include<iostream>
using namespace std;
// double power(double n , int p = 2){
//     double result = 1;
//     for(int i = 0; i < p; i++){
//         result *= n;
//     }
//     return result;
// }
int pow(int x , int n){
    if(n == 1) return x;
    int ans = pow(x , n/2);
    if(n % 2 == 0) return ans*ans;
    else return ans*ans*x;
}
int main(){
    cout << pow(3 , 4);
    // double n;
    // int p;
    // double result = 0;
    // cout << "Enter n : ";
    // cin >> n;
    // cout << "Enter p : ";
    // cin >> p;
    // if(p < 0){
    //     result = power(n);
    //     cout << n << "^2 = " << result; 
    // }
    // else{
    //     result = power(n,p);
    //     cout << n <<"^" << p << " = " << result;
    // }
}