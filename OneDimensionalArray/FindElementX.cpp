#include<iostream>    // Linear Search 
using namespace std;
int main() {
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    for(int i = 0; i <= n - 1; i++){
        cin >> arr[i];
    }
    int x;
    cout << "Enter the element you want to search : ";
    cin >> x;
    // for(int i = 0; i <= n - 1; i++){
    //     if(arr[i] == x) cout << "Present.";
    // }
    bool flag = false;    // Check Mark -> Search 
    for(int i = 0; i <= n - 1; i++){
        if(arr[i] == x) flag = true;
    }
    if(flag == true) cout << "Element found .";
    else cout << "Element not found .";
}