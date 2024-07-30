#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,4,7,8,3};
    int n = sizeof(arr)/sizeof(arr[0]);
      int min = INT_MAX;
      for(int i = 0; i <= n-1; i++){
        if(arr[i] < min) min = arr[i];
      }
      cout << min;
}