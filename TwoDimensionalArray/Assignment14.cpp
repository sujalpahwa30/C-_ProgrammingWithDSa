#include<iostream>
using namespace std;
int main() {
    int m;
    cout << "Enter the no of rows : ";
    cin >> m;
    int n;
    cout << "Enter the no of columns : ";
    cin >> n;
    int arr[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    // cout << endl;
    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // int a[3][3] = {1,2,3,4,5,6,7,8,9};
    // int b[3][3] = {4,5,8,0,0,8,1,2,0};
    // int res[3][3];
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         res[i][j] = a[i][j] + b[i][j];
    //     }
    // }
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout << res[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //    int max = INT_MIN;
    //    for(int i = 0; i < m; i++){
    //     for(int j = 0; j < n; j++){
    //         if(arr[i][j] > max) max = arr[i][j];
    //     }
    //    }
    //    cout << max;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if((i % 2 != 0) || (j % 2 != 0))
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    }