#include<iostream>
#include<climits>
using namespace std;    //  Print and Store  -> 
// void printMax(int arr[] , int n , int idx , int max) {
//     if(idx == n){
//         cout << max;
//         return;
//     }
//     if(max < arr[idx]) max = arr[idx];
//     printMax(arr , n , idx+1 , max);
// }
// int main() {
//     int arr[] = {3,6,77,22,90,32};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printMax(arr , n , 0 , INT_MIN);
// }

int maxInArray(int arr[] , int n , int idx) {
    if(idx == n) return INT_MIN;
    return max(arr[idx] , maxInArray(arr , n , idx+1));
}
int main() {
    int arr[] = {33,55,65,22,27,98};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << maxInArray(arr , n , 0);
}