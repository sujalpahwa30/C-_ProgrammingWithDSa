#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of lines : ";
    cin >> n;
    // for(int i = 1; i <= n; i++){      // Old Star Triangle 
    //     for(int j = 1; j <= 2 * i - 1; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


    //    for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n - i; j++){
    //         cout << " ";
    //     }
    //     for(int k = 1; k <= 2 * i - 1; k++){
    //         cout << "*";
    //     }
    //     cout << endl;
    //    }
        


        int nst = 1;       // nst means no. of stars 
        int nsp = n - 1;   // nsp means no. of spaces
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= nsp; j++){
                cout << " ";
            } 
            nsp--;
            for(int k = 1; k <= nst; k++){
                cout << "*";
            }
            nst += 2;
            cout << endl;
        }
}