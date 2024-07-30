#include<iostream>
#include<vector>
using namespace std;
int pivotIndex(vector<int>& v){
    int n = v.size();
    vector<int>pre(n);
    for(int i = 1; i < n; i++){
        pre[i] += pre[i-1];
    }
    vector<int>suf(n);
    for(int i = n-2; i >= 0; i--){
        suf[i] 
    }
}
int main(){
    int arr[] = {1,7,3,6,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    for(int i = 0; i < n; i++){
        v.push_back(arr[i]);
    }
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    cout << pivotIndex(v);
}