#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows : ";   // i denotes no of rows or no of lines 
    cin >> n;
    int m;
    cout << "Enter number of columns : ";  // j denotes no of columns or no of things in each line 
    cin >> m;
    for( int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
        cout << "*";
        }
    cout << endl;
    }
}