#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,4,5,6,6,4,3,9,0};
    int n = sizeof(arr) / sizeof(arr[0]);   // Length of array 
    cout << n;
}