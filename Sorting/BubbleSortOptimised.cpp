#include<iostream>
using namespace std;
int main() {
    int arr[6] = {5,4,6,3,1,2};
    int n = 6;
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    for(int i = 0; i < n-1; i++){     // Bubble Sort Optimised 
        bool flag = true;       // True means sorted 
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                flag = false;
            }
        }
        if(flag == true){   // Swap didn't happen 
            break;
        }
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}      // Bubble Sort is a Stable Sort 