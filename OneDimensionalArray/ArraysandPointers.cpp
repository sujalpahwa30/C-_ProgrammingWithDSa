#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    int*ptr = arr;  // int*ptr = &arr[0];   -> Giving Address 
    cout << ptr << endl; 
    for(int i = 0; i <= 4; i++){
        cout << ptr[i] << " "; // ptr[i] = i[ptr] = i[arr] -> All are same 
    }
    cout << endl;
    *ptr = 8;
    // for(int i = 0; i <= 4; i++){
    //     cout << ptr[i] << " ";
    // }
    for(int i = 0; i <= 4; i++){
        cout << *ptr << " ";
        ptr++;
    }
    ptr = arr;   // ptr is pointing to first element 
    *ptr = 8;  // ptr[0] = 8
    ptr++;  // ptr is pointing to 2nd element 
    *ptr = 9;
    ptr--;   // ptr is pointing to 1st element 
    cout << endl;
    for(int i = 0; i <= 4; i++){
        cout << *ptr << " ";
        ptr++;
    }
}