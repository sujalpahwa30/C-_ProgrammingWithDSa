#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows : ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){   // Spaces
            cout << " ";
        }
        for(int k = 1; k <= i; k++){      // Stars 
            cout << "*";
        }
        cout << endl;
    }

    //   for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++){
    //         if((i + j) >= n + 1) cout << "*";
    //         else cout << " ";
    //     }
    //     cout << endl;
    //   }
}