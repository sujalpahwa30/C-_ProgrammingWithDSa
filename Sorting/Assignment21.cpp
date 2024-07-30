#include<iostream>
using namespace std;
int main() {
//     int arr[] = {1,3,4,6,2,5};
//     int n = 6;
//     for(int i = 0; i < 6; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     for(int i = 0; i < n-1-i; i++){
//         bool flag = true;
//         for(int j = 0; j < n-1; j++){
//             if(arr[j] > arr[j+1]){
//                 // swap(arr[j] , arr[j+1]);
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//         if(flag == false){
//             break;
//         }
//     }
//     for(int i = n-1; i >= 0; i--){
//         cout << arr[i] << " ";
//     }


    //   // Method - 1
    //   int arr[] = {4,2,7,9,8};
    //   int n = 5;
    //   int brr[5];
    //   for(int i = 0; i < n; i++){
    //     brr[i] = arr[i];
    //   }
    //   for(int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    //   }
    //   for(int i = 0; i < n-1; i++){
    //     bool flag = false;
    //     for(int j = 0; j < n-1-i; j++){
    //         if(arr[j] > arr[j+1]){
    //             swap(arr[j] , arr[j+1]);
    //             flag = false;
    //         }
    //     }
    //     if(flag == true){
    //         break;
    //     }
    //   }
    //   cout << endl;
    //   for(int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    //   }
    //   cout << endl;
    //   bool flag = true; 
    //   for(int i = 0; i < n; i++){
    //     if(i == 0){
    //         if(brr[i] != arr[i] && brr[i] != arr[i+1]){
    //             flag = false;
    //             break;
    //         }
    //     }
    //     else if(i == n-1){
    //         if(brr[i] != arr[i] && brr[i] != arr[i-1]){
    //             flag = false;
    //             break;
    //         }
    //     }
    //     else{
    //         if(brr[i] != arr[i] && brr[i] != arr[i+1] && brr[i] != arr[i-1]){
    //             flag = false;
    //             break;
    //         }
    //     }
    //   }
    //   cout << flag;


    // // Method - 2  -> Way better method with O(1) space 
    // int arr[] = {4,2,9,7,8};
    // int n = 5;
    // bool flag = true;
    // for(int i = 0; i < n; i++){
    //     int count = 0; 
    //     for(int j = 0; j < n; j++){
    //         if(i == j) continue;
    //         if(arr[j] > arr[i]) count++;
    //     }
    //     int aidx = n - count - 1;
    //     int diff = aidx - i;
    //     if(diff < 0) diff = -diff;
    //     if(diff > 1){
    //         flag = false;
    //         break;
    //     }
    // }
    // cout << flag;


    // Method - 3 -> Best Method 
      int arr[] = {4,2,6,7,8};
      int n = 5;
      for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
      }
      cout << endl;
      // Almost sorted 
      for(int i = 0; i < n; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i] , arr[i+1]);
            i++;
        }
      }
      // 2 4 7 9 8 -> Modified array 
      // Check if the modified array is sorted or not 
      bool flag = true;
      for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            flag = false;
            break;
        }
      }
      if(flag == true) cout << "Almost sorted .";
      else cout << "Not almost sorted .";
}