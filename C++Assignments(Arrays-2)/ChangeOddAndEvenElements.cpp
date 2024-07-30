#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i <= n-1; i++){
          if(i % 2 != 0) {
            arr[i] = 2 * arr[i];
          }
          else {
            arr[i] += 10;
          }
        }
        for(int i = 0; i <= n-1; i++){
          cout << arr[i] << " ";
        }
}