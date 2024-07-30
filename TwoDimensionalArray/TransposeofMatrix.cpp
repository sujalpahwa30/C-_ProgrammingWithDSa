#include<iostream>
using namespace std;     // Column Wise Printing 
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
    cout << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // for(int j = 0; j < n; j++){     // Printing Transpose 
    //     for(int i = 0; i < m; i++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int t[n][m];            // Store the Transpose 
    for(int i = 0; i < n; i++){
       for(int j = 0; j < m; j++){
        t[i][j] = arr[j][i];
       }
    }
    for(int i = 0; i < n; i++){        // Printing 
        for(int j = 0; j < m; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

}