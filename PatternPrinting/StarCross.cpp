// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter number of rows : ";
//     cin >> n;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             if(i == j || i + j == n + 1) cout << "*";   // i + j == 2 * i / j
//             else cout << " ";
//         }
//         cout << endl;
//     }
// }   




#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows : ";
    cin >> n;
    int k = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
}