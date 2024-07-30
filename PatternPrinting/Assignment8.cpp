#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows / lines : ";
    cin >> n;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n - i; j++){
    //         cout << " ";
    //     }
    //     for(int k = 1; k <= 2 * i - 1; k++){
    //         cout << k;
    //     }
    //     cout << endl;
    // }    


    //    for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n - i; j++){
    //         cout << " ";
    //     }
    //     for(int k = 1; k <= 2 * i - 1; k++){
    //         cout << (char) int(k + 64);
    //     }
    //     cout << endl;

    //    }     


        // for(int i = 1; i <= 2 * n - 1; i++){
        //     cout << (char) int (i + 64);
        // }
        // cout << endl;
        // int m = n - 1;
        // int nsp = 1;
        // for(int i = 1; i <= m; i++){
        //     int a = 1;
        //     for(int j = 1; j <= m + 1 - i; j++){
        //         cout << (char) int(a + 64);
        //         a++;
        //     }
        //     for(int k = 1; k <= nsp; k++){
        //         cout << " ";
        //         a++;
        //     }
        //     nsp+=2;
        //     for(int j = 1; j <= m + 1 - i; j++){
        //         cout << (char) int(a + 64);
        //         a++;
        //     }
        //     cout << endl;
        // }   


        //    for(int i = 1; i <= 2 * n - 1; i++){
        //     if(i <= 4) cout << i;
        //     else cout << i - 2;
        //    }
        //    cout << endl;
        //    int m = n - 1;
        //    int nsp = 1;
        //    for(int i = 1; i <= m; i++){
        //     for(int j = 1; j <= m + 1 - i; j++){
        //         cout << j;
        //     }
        //     for(int k = 1; k <= nsp; k++){
        //         cout << " ";
        //     }
        //     nsp+=2;
        //     for(int j = 1; j <= m + 1 - i; j++){
        //         cout << j;
        //     }
        //     cout << endl;
        //    }    

        //    for(int i = 1; i <= n; i++){
        //     for(int j = 1; j <= n-i; j++){
        //         cout << " ";
        //     }
        //     for(int j = 1; j <=2*i-1; j++){
        //         cout << "*";
        //     }
        //     cout << endl;
        //    }

        //    for(int i = 1; i <= n; i++){
        //     for(int j = 1; j <= n-i; j++){
        //         cout << " ";
        //     }
        //     for(int j = i-1; j >= 0; j--){
        //         cout << (char) int(j + 64) << " ";
        //     }
        //     for(int j = 1; j <= i-1; j++){
        //         cout << (char) int(j + 64) << " ";
        //     }
        //     cout << endl;
        //    }


//            for(int i = 1; i <= n; ++i) {
// for(int j = 1; j <= n - i; ++j) {
// cout << " ";
// }
// for(int j = i-1; j >= 0; --j) {
// cout << (char)('A'+j) << " ";
// }
// for(int j = 1; j < i; ++j) {
// cout << (char)('A'+j) << " ";
// }
// cout << endl;
// }


//    for(int i = 0; i < n-1; ++i) {
// for(int j = 0; j < i; ++j) {
// cout << " ";
// }
// cout << "*";
// int m = 2 * (n - i - 1);
// for(int j = 0; j < m-1; ++j) {
// cout << " ";
// }
// cout << "*" << endl;
// }
// //Printing last star
// for(int i = 0; i < n-1; ++i) {
// cout << "*";
// }  

//     for(int i = 0; i < n; ++i)
// cout << " ";
// cout << "*" << endl;
// // Printing the rest of the upper triangle: [1...n] rows
// for(int i = 1; i <= n; ++i) {
// // Printing initial spaces
// for(int j = 0; j < n - i; ++j) {
// cout << " ";
// }
// cout << "*";
// int m = 2 * i - 1;
// // Printing middle spaces
// for(int j = 0; j < m; ++j) {
// cout << " ";
// }
//  for(int i = 0; i < n; ++i) {
// cout << " ";
// }
// cout << 1 << endl;
// for(int i = 1; i <= n; ++i) {
// for(int j = 0; j < n - i; j++) {
// cout << " ";
// }
// cout << i;
// for(int j = 0; j < 2 * i - 1; ++j) {
// cout << " ";
// }
// cout << i << endl;
// } for(int i = 0; i < n; ++i) {
// for(int j = 0; j <= i; ++j) {
// cout << "* ";
// }
// for(int j = 0; j < 2 * (n - i - 1); ++j) {
// cout << " ";
// }
// for(int j = 0; j <= i; ++j) {
// cout << "* ";
// }
// cout << endl;
// }
// for(int i = n-1; i >= 0; --i) {
// for(int j = 0; j <= i; ++j) {
// cout << "* ";
// }

// for(int i = 0; i < 2 * n - 1; ++i) {
// cout <<"* ";
// }
// cout << endl;
// // Printing upper pattern
// for(int i = 1; i < n; ++i) {
// for(int j = 0; j < n - i; ++j) {
// cout << "* ";
// }
// for(int j = 0; j < 2 * i - 1; ++j) {
// cout << " ";
// }
// for(int j = 0; j < n - i; ++j) {
// cout << "* ";
// }
// cout << endl;
// }
     for(int i = 0; i < 2 * n - 1; ++i) {
for(int j = 0; j < 2 * n - 1; ++j) {
if(i == n-1 || j == n-1 || i+j == n-1 || j-i == n-1 || i - j == n-1 || i
+ j == 3 * (n-1)) {
cout << "* ";
} else {
cout << " ";
}
}
cout << endl;
}
return 0;


      

     
}
