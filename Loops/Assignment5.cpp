#include<iostream>
using namespace std;
int main() {
    // for(int i = 1; i <= 100; i++)
    // if(i % 2 != 0) cout << i << endl;

    // for(int i = 3; i <= 100; i++)
    // if(i % 3 == 0) cout << i << endl; 

    int n;
    cout << "Enter an integer : ";
    cin >> n;
    for(int i = n; i <= n * 10; i+=n)
    cout << i << endl; 
    
// int n;
// cin >> n;
// for (int i = 1; i <= 100; i++) {
// cout << n*i << " ";}

    // int a = 4;
    // for(int i = 1; i <= n; i++){
    //     cout << a << endl;
    //     a = a + 3;
    // }

    // int a = 3;
    // for(int i = 1; i <= n; i++){
    //     cout << a << endl;
    //     a = a * 4;
    // }

    // for(int i = 65; i <= 90; i++)
    // cout << (char)i << " " << i << endl;

    // int i = 64;
    // while(i <= 89){
    //     i++;
    //     cout << (char)i << " " << i << endl;
    // }
//     int n;
// cin >> n;
// int i = 0;
// while (i < 26) {
// cout << "ASCII value of " << (char)(i + 'A') << " is " << (int)(i + 'A') <<
// endl;
// i++;
// }


}   