#include<iostream>
#include<vector>
using namespace std; 

// // Arrays ->
// void display(int arr[] , int n , int idx) {
//     if(idx == n) return;
//     cout << arr[idx] << " ";
//     display(arr , n , idx+1);
// }
// int main() {
//     int arr[] = {1,2,3,4,5,6,7};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     display(arr , n , 0);
// }

// Vectors
void display2(vector<int>& v , int idx) {
    if(idx == v.size()) return;
    cout << v[idx] << " ";
    display2(v , idx+1);
}
int main() {
    int arr[] = {1,4,5,6,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        v[i] = arr[i];
    }
    display2(v , 0);
}