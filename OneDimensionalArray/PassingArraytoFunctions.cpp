#include<iostream>
using namespace std;   // Pass by Reference -> Updation,accessing the elements of another array in another function 
// void display(int a[]) {
//     for(int i = 0; i <= 4; i++){
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     return;
// }
// void change(int b[]) {
//     b[0] = 100;
// }
// int main() {
//     int arr[5] = {1,2,3,4,5};
//     display(arr);
//     change(arr);
//     display(arr);
// }
    
    void display(int a[] , int size) {   // int a[] = int*a
        for(int i = 0; i <= size - 1; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    int main() {
        int arr[] = {1,2,3,4,5};
        int size = sizeof(arr)/sizeof(arr[0]);
        cout << size << endl;
        display(arr,size);
    }