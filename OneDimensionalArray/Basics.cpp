#include<iostream>
using namespace std;
int main() {
    // int arr[5];
    // arr[0] = 1;
    // arr[1] = 2;
    // arr[2] = 3;
    // arr[3] = 4;
    // arr[4] = 5;
    // cout << arr[2];

    // int arr[4] = {1,4,5,8};
    // //cout << arr[3];
    // for(int i = 0; i <= 3; i++){  
    //     cout << arr[i] << " ";
    // }

    int arr[8];
    for(int i = 0; i <= 7; i++){    // Input 
        cin >> arr[i];
    }
    for(int j = 0; j <= 7; j++){   // Output
        cout << arr[j] << " ";
    }
}