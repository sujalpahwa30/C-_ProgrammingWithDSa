#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lo = 0;
    int hi = n-1;
    for(int i = 0; i < n; i++){
        int mid = (lo+hi)/2;
        if(n % 2 == 0){
            cout << arr[mid];
            break;
        }
    }
}