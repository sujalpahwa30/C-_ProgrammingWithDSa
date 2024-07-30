#include<iostream>
using namespace std;
int main() {
    // int m;
    // cout << "Enter the no of rows : ";
    // cin >> m;
    // int n;
    // cout << "Enter the no of columns : ";
    // cin >> n;
    // // int arr[m][n];
    // // for(int i = 0; i < m; i++){
    // //     for(int j = 0; j < n; j++){
    // //         cin >> arr[i][j];
    // //     }
    // // }
    // cout << endl;
    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < n; j++){
    //         if(i == j || i + j == 2) 
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // for(int j = 0; j < n; j++){
    //     for(int i = 0; i < m; i++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for(int k = 0; k < m; k++){
    //     int i = m-1; 
    //     int j = 0;
    //     while(j >= i){
    //         int temp = arr[i][k];
    //         arr[i][k] = arr[j][k];
    //         arr[j][k] = temp;
    //         i++;
    //         j--;
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    //: 7 4 1 2 5 8 9 6 3
     

    //  for(int j = 0; j <= m-1; j++){
    //     if(j % 2 == 0){
    //         for(int i = n-1; i >= 0; i--){
    //             cout << arr[i][j] << " ";
    //         }
    //     }
    //     else{
    //         for(int i = 0; i <= n-1; i--){
    //             cout << arr[i][j] << " ";
    //         }
    //     }
    //  }
//       int a[][2] = {{1,2},{3,4}};
// int i, j;
// for (i = 0; i < 2; i++)
// for (j = 0; j < 2; j++)
// cout << a[i][j];



     int n;
cin>>n;
int a[n][n];
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)cin>>a[i][j];
}
// let's first calculate the transpose of the given matrix
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(i <= j)swap(a[i][j] , a[j][i]);
}
}
for(int j=0;j<n;j++){
for(int i=0;i<n/2;i++){
swap(a[i][j] , a[n-i-1][j]);
}


}
}