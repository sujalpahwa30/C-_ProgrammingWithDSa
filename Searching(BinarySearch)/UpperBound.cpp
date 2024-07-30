#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,2,4,5,8,10,13,17,20};
    int n = 9;
    int x = 17;
    // for(int i = 0; i < n; i++){    // Linear Search 
    //     if(arr[i] > x) {
    //         cout << arr[i];
    //         break;
    //     }
    // }

    int lo = 0;    // Binary Search 
    int hi = n-1; 
    bool flag = false;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == x) {
            flag = true;
            cout << arr[mid+1];
            break;
        }
        else if(arr[mid] < x) lo = mid+1;
        else hi = mid-1;
    }
    if(flag == false) cout << arr[lo];
}