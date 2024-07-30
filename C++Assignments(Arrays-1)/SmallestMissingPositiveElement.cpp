#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,6,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 0;
    bool flag = false;
    for(int i = 0; i <= n-1; i++){
        if(arr[i] != x)  {
        cout << x << endl;
        flag = true;
        break;
    }
    else x++;
    }
    if(flag == false)
    cout << x << endl;

}