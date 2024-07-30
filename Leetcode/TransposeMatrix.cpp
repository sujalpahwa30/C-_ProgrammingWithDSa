#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m , n;
    //int arr[m][n] = {1,2,3,4,5,6,7,8,9};
    vector<int>arr(m,n) = {1,2,3,4,5,6,7,8,9};
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
    }
}