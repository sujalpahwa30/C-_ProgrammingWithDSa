#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {3,5,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    for(int i = 0; i < n; i++){
        v.push_back(arr[i]);
      }
    for(int i = 0; i < v.size()-1; i++){
        if(v[i-1] > v[i] ) {
        cout << "Array is not sorted .";
            }
        else {
        cout << "Array is sorted .";
        break;
        }
      }
}