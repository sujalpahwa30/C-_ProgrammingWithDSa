#include<iostream>
using namespace std;
// void greeting() {
//     cout << "Good morning " << endl;
//     cout << "Have a nice day " << endl;
// }
// int main() {
//     greeting();    // Function Calling 
//     greeting();
//     greeting();
// }    
    //  void starTriangle(int x){      // Star Triangle code by using functions 
    //     for(int i = 1; i <= x; i++){
    //         for(int j = 1; j <= i; j++){
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }
    //  }

    // int main() {
    //     starTriangle(3);
    //     starTriangle(4);
    //     starTriangle(5);
    // }
       int sum(int x , int y) {
        return x + y;
       }

      int main() {
        cout << sum(40 , 60) << endl;
        cout << sum(22 , 88) << endl;
        cout << sum(75 , 45) << endl;

      }
