#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int maxProduct(vector<int>v){
    sort(v.begin() , v.end());
    reverse(v.begin() , v.end());
    int product = 1;
    for(int i = 0; i < 3; i++){
        product *= v[i];
    }
    return product;
}
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    for(int i = 0; i < n; i++){
        v.push_back(arr[i]);
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    cout << maxProduct(v);
}