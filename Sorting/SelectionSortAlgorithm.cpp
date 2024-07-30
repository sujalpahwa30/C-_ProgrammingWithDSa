#include<iostream>
using namespace std;
int main() {
    int arr[] = {5,3,1,4,2};
    int n = 5;
    for(int ele : arr){   // For Each Loop 
        cout << ele << " ";
    }
    cout << endl;
    // Selection Sort 
    for(int i = 0; i < n-1; i++){
        int min = INT_MAX;
        int mindx = -1;
        // Min element calculation in the given array 
        for(int j = i; j < n; j++){
            if(arr[j] < min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i] , arr[mindx]);      // T.C. O(n^2)  and S.C. O(1)
    }
    for(int ele : arr){
        cout << ele << " ";
    }
}       // Selection Sort is an Unstable Algorithm 