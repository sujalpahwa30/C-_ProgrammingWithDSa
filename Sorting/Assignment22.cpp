#include<iostream>
#include<string>
using namespace std;
int main() {
    // int arr[] = {3,1,5,2,5,5};    // Minimum possible sum from the array 
    // int n = 6;
    // for(int i = 0; i < 6; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // // Insertion Sort 
    // for(int i = 0; i < n; i++){
    //     int j = i; 
    //     while(j >= 1 && arr[j] < arr[j-1]){
    //         swap(arr[j] , arr[j-1]);
    //         j--;
    //     }
    // }
    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // // Storing the sorted array into an integer 
    // int x = 0; 
    // for(int i = 0; i < n; i++){
    //     x *= 10;
    //     x += arr[i];
    // }
    // cout << x;
    // // For second minimum , we need to change the sorted array 
    // for(int i = n-1; i >=0; i--){
    //     if(arr[i] != arr[i-1]){
    //         swap(arr[i] , arr[i-1]);
    //         break;
    //     }
    // }
    // cout << endl;
    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // // Making this array into an integer 
    // int y = 0; 
    // for(int i = 0; i < n;i++){
    //     y *= 10; 
    //     y += arr[i];
    // }
    // cout << y;
    // cout << endl;
    // cout << "Minimum sum is : " << x+y;


    string arr[] = {"sujal", "kunal" , "kartik" , "himanshu" , "shubham" , "parth" , "sumit"};
    int n = 7;
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    cout << endl;
    // Bubble Sort 
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
}