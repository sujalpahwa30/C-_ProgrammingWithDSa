#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows : ";
    cin >> n;
    // int a = 5;      // Using Extra Variable  
    // for(int i = 1; i <= n; i++){
    //     if(i % 2 != 0) a = 1;    // Row no odd 
    //     else a = 0;             // Row no even
    //     for(int j = 1; j <= i; j++){
    //         cout << a;
    //         if(a == 1) a = 0;    // Flipping 
    //         else a = 1;
    //     }
    //     cout << endl;
    // }


    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if((i + j) % 2 == 0) cout << 1;
            else cout << 0;
        }
        cout << endl;
    }
}