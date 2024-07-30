#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
     for(int i = 0; i <= n-1; i++){
          int count = 0;
          for(int j = 0; j <= n-1; j++){
            if(arr[i] == arr[j])
            count++;
          }
          if(count == 0)
          cout << arr[i] << endl;
        }
        cout << "No Unique Value .";       
}