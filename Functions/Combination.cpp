#include<iostream>
using namespace std;
// int main() {       // Normal Method
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int r;
//     cout << "Enter r : ";
//     cin >> r;
//     int nfact = 1; 
//     for(int i = 2; i <= n; i++){
//         nfact *= i;
//     }
//     int rfact = 1;
//     for(int i = 2; i <= r; i++){
//         rfact *= i;
//     }
//     int nrfact = 1;
//     for(int i = 2; i <= n - r; i++){
//         nrfact *= i;
//     }
//     int ncr = nfact / (rfact * nrfact);
//     cout << ncr;
// }   
      int fact(int x) {     // By using Functions 
        int f = 1;
        for(int i = 2; i <= x; i++){
            f *= i;
        }
        return f;
      }
      int combination(int n , int r){     // Function calling another function 
        int ncr = fact(n)/(fact(r) * fact(n - r));
        return ncr;
      }

    int main() {
        int n;
        cout << "Enter n : ";
        cin >> n;
        int r;
        cout << "Enter r : ";
        cin >> r;
    //     int nfact = fact(n);
    //     int rfact = fact(r);
    //     int nrfact = fact(n - r);
    //     int ncr = nfact/(rfact * nrfact);
    //     cout << ncr;
    // }

    int ncr = combination(n , r);
    cout << ncr;
        

    }


    
