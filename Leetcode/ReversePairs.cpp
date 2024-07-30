#include<iostream>
#include<vector>
using namespace std;
int reversePairs(vector<int>& v){
    
}
int main(){
    int arr[] = {1,3,2,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    for(int i = 0; i < n; i++){
        v.push_back(arr[i]);
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    cout << reversePairs(v);
}