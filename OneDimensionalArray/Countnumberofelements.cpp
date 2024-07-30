#include<iostream>
using namespace std;  // Count the number of elements in a array greater than a given number x
int main() {
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    for(int i = 0; i <= n-1; i++){
        cin >> arr[i];
    }
    int x;
    cout << "Enter the value of that number : ";
    cin >> x;
    int count = 0;
    for(int i = 0; i <= n-1; i++){
        if(arr[i] > x) count++;
    }
    cout << count;
}