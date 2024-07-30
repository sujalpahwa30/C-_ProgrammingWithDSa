#include<iostream>
#include<vector>
using namespace std;
int main() {
//int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};   // Rows = 3 , Columns = 3

// int arr[3][3] = {1,2,3,4,5,6,7,8,9};
// for(int i = 0; i <= 2; i++){  // i -> Row 
//     for(int j = 0; j <= 2; j++){    // j -> Column
//         cout << arr[i][j] << " ";
//     }
//     cout << endl;
// }

int m;
cout << "Enter the no of rows : ";
cin >> m;
int n;
cout << "Enter the no of columns : ";
cin >> n;
int arr[m][n];
for(int i = 0; i <= m-1; i++){
    for(int j = 0; j <= n-1; j++){
        cin >> arr[i][j];
    }
}
for(int i = 0; i <= m-1; i++){
    for(int j = 0; j <= n-1; j++){
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
}