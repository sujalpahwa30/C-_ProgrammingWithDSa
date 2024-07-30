#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of lines / rows : ";
    cin >> n;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++){
    //         cout << i;
    //     }
    //     cout << endl;
    // }

      //  for(int i = 1; i <= n; i++){
      //   for(int j = 1; j <= n + 1 - i; j++){
      //       cout << j;
      //   }
      //   cout << endl;
      //  }


        // for(int i = 1; i <= n; i++){
        //     for(int j = 1; j <= i; j++){
        //         cout << (char)int (j + 64) << " ";
        //     }
        //     cout << endl;
        // }


        // for(int i = 1; i <= n; i++){
        //     for(int j = 1; j <= i; j++){
        //         if(i % 2 != 0) cout << j << " ";
        //         else cout << (char) int (j + 64) << " ";
        //     }
        //     cout << endl;
        // }
           

          //  for(int i = 1; i <= n; i++){
          //   for(int j = 1; j <= i; j++){
          //       cout << "*";
          //   }
          //   cout << endl;
          //  }


        //   for(int i  = 1; i <= n; i++){
        //     for(int j = 1; j <= n - i; j++){
        //         cout << " ";
        //     }
        //     for(int k = 1; k <= n; k++){
        //         cout << "*";
        //     }
        //     cout << endl;
        //   }


        // for(int i = 1; i <= n; i++){
        //     for(int j = 1; j <= i; j++){
        //         cout << j;
        //     }
        //     cout << endl;
        // }


          // for(int i = 1; i <= n; i++){
          //   for(int j = 1; j <= n - i; j++){
          //       cout << " ";
          //   }
          //   for(int k = 1; k <= i; k++){
          //       cout << (char) int(k +  64);
          //   }
          //   cout << endl;
          // }   

          //  int k = 1;
          // for(int i = 1; i <= n; i++){
          //   for(int j = 1; j <= i; j++){
          //     cout << k << " ";
          //     k += i;
          //   }
          //   cout << endl;
          // }   

          // for(int i = 1; i <= n; i++){
          //   for(int j = 1; j <= i; j++){
          //     cout << "*";
          //   }
          //   cout << endl;
          // }
          // for(int k = 1; k <= n-1; k++){
          //   for(int l = 1; l <= n-k; l++){
          //     cout << "*";
          //   }
          //   cout << endl;
          // }

          // int m; 
          // cout << "Enter m : ";
          // cin >> m;
          // int n;
          // cout << "Enter n : ";
          // cin >> n;
          // for(int i = 0; i <= m-1; i++){
          //   for(int j = 0; j <= n-1; j++){
          //     if((i == 0) || (j == 0) || (i == m-1) || (j == n-1))
          //     cout << "*";
          //     else 
          //     cout << " ";
          //   }
          //   cout << endl;
          // }

          // for(int i = 0; i <= n-1; i++){
          //   for(int j = 0; j <= n-i-2; j++){
          //     cout << "";
          //   }
          //   for(int j = i+1; j >= 1; j--){
          //     cout << j <<" ";
          //   }
          //   cout << endl;
          // }

           
          //  for(int i = 1; i <= n; i++){
          //   for(int j = 1; j <= n-i; j++){
          //     cout << " ";
          //   }
          //   for(int k = 1; k <= i; k++){
          //     cout << "*";
          //   }
          //   cout << endl;
          //  }
          //  for(int i = 0; i <= n; i++){
          //   for(int j = 0; j <= i; j++){
          //     cout << "*";
          //   }
          //   cout << endl;
          //  }// Printing upper triangle
for(int i = 0; i < n; ++i) {
for(int j = 0; j < n-i-1; ++j) {
cout << " ";
}
for(int j = 0; j <= i; ++j) {
cout << "*";
}
cout << endl;
}
// Printing lower triangle
for(int i = 0; i < n-1; ++i) {
for(int j = 0; j <= i; ++j) {
cout << "*";
} 
cout << endl;
}

            
  
}