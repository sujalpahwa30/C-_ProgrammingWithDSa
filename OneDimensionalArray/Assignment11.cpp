#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    for(int i = 0; i <= n-1; i++){
        cin >> arr[i];
    }
    // int product = 1;
    // for(int i = 0; i <= n-1; i++) {
    //     product *= arr[i];
    // }
    // cout << product;
    //    int max ,smax =  INT_MIN;
    //    for(int i = 0; i <= n-1; i++){
    //     if(max < arr[i]) {
    //         smax = max;
    //         max = arr[i];
    //     }
    //     else if(smax < arr[i] && arr[i] != max){
    //         smax = arr[i];
    //     }
    //    }
    //    if(smax == INT_MIN){
    //     cout << "No second element exist ." << endl;
    //    }
    //    else {
    //     cout << smax << endl;
    //    }

    //   int min = INT_MAX;
    //   for(int i = 0; i <= n-1; i++){
    //     if(arr[i] < min) min = arr[i];
    //   }
    //   cout << min;

    // bool flag = false;
    // for(int i = 0; i <= n-1; i++){
    //     for(int j = i+1; j <= n-1; j++){
    //         if(arr[i] == arr[j]){
    //             flag = true;
    //             cout << arr[i] << endl;
    //             break;
    //         }
    //     }
    // }
    // if(flag == false)
    // cout << "No duplicate ";
    // else 
    // cout << "Duplicate found ";


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


       



// int sub[50], i ;
// for ( i = 0 ; i <= 48 ; i++ ) ;
// {
// sub[i] = i ;
// cout<<sub[i]<<endl ;
// }
// return 0;

}