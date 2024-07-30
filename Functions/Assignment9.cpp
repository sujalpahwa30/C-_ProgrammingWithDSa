#include<iostream>
using namespace std;
// int square(int n) {
//    int sq = n;
//     for(int i = 1; i <= n; i++){
//         sq = n * n;
//     }
//     return sq;
// }
// int main() {
//     int n;
//     cout << "Enter an integer : ";
//     cin >> n;
//     for(int i = 1; i <= n; i++){
//         cout << square(i) << endl;
//     }
//  }
//   int area(int r) {
//   int a = 3.14 * r * r;
//     return a;
//   }


//    int main() {
//     int r;
//     cout << "Enter radius : ";
//     cin >> r;
//     cout << area(r);
//    }
    // void odd(int a , int b) {
    //     if(a>b){
    //         odd(b , a);
    //         return;
    //     }
    //     for(int i = a; i <=b; i++){
    //         if(i % 2 != 0) 
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }


    //  int main() {
    //     int a;
    //     cin >> a;
    //     int b;
    //     cin >> b;
    //     odd(a , b);
    //  }
    int square(int n) {
        return n * n;
    }
       int countNumberofdigits(int n) {
        int c = 0;
        while(n > 0){
            n = n / 10;
            c++;
            }
            return c;
        }
        int main() {
      int n;
      cout << "Enter an number : ";
      cin >> n;
      int numberofdigits = countNumberofdigits(n);
      cout << square(numberofdigits) << endl;
        }


