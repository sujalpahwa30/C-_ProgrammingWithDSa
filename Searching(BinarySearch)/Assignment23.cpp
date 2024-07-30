#include<iostream>
using namespace std;
int main() {
    // int arr[] = {1,2,3,3,4,4,4,5};
    // int n = 8; 
    // int x = 4;
    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // int lo = 0;
    // int hi = n-1; 
    // bool flag = false;
    // while(lo <= hi){
    //     int mid = lo + (hi - lo)/2;
    //     if(arr[mid] == x){
    //         if(arr[mid+1] != x ){
    //             flag = true;
    //             cout << mid;
    //             break;
    //         }
    //         else{
    //             lo = mid+1;
    //         }
    //     }
    //     else if(arr[mid] > x) hi = mid-1;
    //     else lo = mid+1;
    // }
    // if(flag == false) cout << -1;


    //   int arr[] = {0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1};
    //   int n = 16;
    //   int x = 1;
    //   for(int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    //   }
    //   cout << endl;
    //   int lo = 0;
    //   int hi = n-1;
    //   int firstIdx = -1;
    //   while(lo <= hi){
    //     int mid = lo + (hi-lo)/2;
    //     if(arr[mid] == x){
    //         if(mid == 0){
    //             firstIdx = mid;
    //             break;
    //         }
    //         else if(arr[mid-1] != x){
    //             firstIdx = mid;
    //             break;
    //         }
    //         else{
    //             hi = mid-1;
    //         }
    //     }
    //     else if(arr[mid] > x) hi = mid-1;
    //     else lo = mid+1;
    //   }
    //   if(firstIdx == -1) cout << 0;
    //   else cout << n - firstIdx; 


//     int arr[4][4] = {{0,1,1,1},{0,0,1,1},{1,1,1,1},{0,0,0,0}};
//     int m = 4;
//     int n = 4;
//     int row = -1;
//     int maxOnes = -1;
//     int x = 1;
//     for(int i = 0; i < m; i++){
//         int countOnes = 0;
//         int lo = 0;
//         int hi = n-1;
//         int firstIdx = -1;
//         while(lo <= hi){
//             int mid = lo + (hi-lo)/2;
//             if(arr[i][mid] == x){
//                 if(mid == 0){
//                     firstIdx = mid;
//                     break;
//                 }
//                 else if(arr[i][mid-1] != x){
//                     firstIdx = mid;
//                     break;
//                 }
//                 else hi = mid-1;
//             } 
//             else if(arr[i][mid] > x) hi = mid-1;
//             else lo = mid+1;
//         }
//         if(firstIdx != -1) countOnes = n-firstIdx;
//         cout << countOnes << endl;
//         if(maxOnes < countOnes){
//             maxOnes = countOnes;
//             row = i;
//         }
//  }
//         cout << row << " " << maxOnes;


        int arr[] = {1,2,3,4,4};
        int n = sizeof(arr)/sizeof(arr[0]);
        int lo = 0; 
        int hi = n-1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid] == mid+1) lo = mid+1;
            if(arr[mid] == mid){
                if(arr[mid] == arr[mid-1]){
                    cout << arr[mid];
                    break;
                }
                else hi = mid-1;
            }
        }

}