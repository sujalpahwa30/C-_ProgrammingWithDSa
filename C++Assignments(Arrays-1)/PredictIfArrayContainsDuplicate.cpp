#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,7,4,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;
    for(int i = 0; i <= n-1; i++){
        for(int j = i+1; j <= n-1; j++){
            if(arr[i] == arr[j]){
                flag = true;
                cout << arr[i] << endl;
                break;
            }
        }
    }
    if(flag == false)
    cout << "No duplicate ";
    else 
    cout << "Duplicate found ";
}