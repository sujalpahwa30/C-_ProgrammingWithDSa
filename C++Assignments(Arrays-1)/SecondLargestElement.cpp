#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max ,smax =  INT_MIN;
    for(int i = 0; i <= n-1; i++){
        if(max < arr[i]) {
            smax = max;
            max = arr[i];
        }
        else if(smax < arr[i] && arr[i] != max){
            smax = arr[i];
        }
    }
       if(smax == INT_MIN){
        cout << "No second element exist ." << endl;
       }
       else {
        cout << smax << endl;
       }
}