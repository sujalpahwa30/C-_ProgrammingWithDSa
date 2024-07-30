#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;
    for(int i = 0; i <= n-1; i++){
        if(arr[i] > max) max = arr[i];
    }
    int smax = INT_MIN;
    for(int i = 0; i <= n-1; i++){
        if(arr[i] != max && arr[i] > smax) smax = arr[i];
    }
    int tmax = INT_MIN;
    for(int i = 0; i <= n-1; i++){
        if( arr[i] != max && arr[i] != smax && arr[i] > tmax) tmax = arr[i];
    }
    cout << max << endl;
    cout << smax << endl;
    cout << tmax << endl;
}