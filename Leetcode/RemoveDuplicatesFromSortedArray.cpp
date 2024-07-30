#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& v){
   vector<int>nums;
   int count = 0;
   for(int i = 0; i < v.size(); i++){
    if(v[i] == v[i+1]){
        nums.push_back(v[i]);
        count++;
    }
   }
   return count;
}
int main(){
    int arr[] = {1,2,2,3,4,4,4,5,7,6,8,8,6,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    for(int i = 0; i < n; i++){
        v.push_back(arr[i]);
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    cout << removeDuplicates(v);
}