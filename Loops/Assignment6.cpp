#include<iostream>
using namespace std;
int main() {
    // while('1' < '2')     // Infinite loop 
    // cout << "In while loop" << endl; 

    // int t = 10;
    // while(t/=2){
    //     cout << "Hello" << endl;
    // }

    // for(int x = 1; x*x <= 10; x++){
    //     cout << "In for loop" << endl;
    // }

    // int x = 10 , y = 0;
    // while(x >= y){
    //     x--;
    //     y++;
    //     cout << x << " " << y << endl;
    // }

      // int n;
      // cout << "Enter a number : ";
      // cin >> n;
      // int lastDigit = 0;
      // int sum = 0;
      // while(n > 0){
      //   lastDigit = n % 10;
      //   if(lastDigit % 2 == 0)
      //   sum += lastDigit;
      //   n/=10;
      // }
      // cout << sum;

        // int ld = n;
        // int r = 0;
        // while(n > 0){
        //   r *= 10;
        //   r += (ld % 10);
        //   n /= 10;
        // }
        // cout << r + n;

      //  int product = 1;
      //  for(int i = 1;i <= n; i++){
      //   product *= i;
      //   cout << product << endl;
      //  }

          //  int a = 1 , b = 1 , sum = 0;
          //  for(int i = 1; i <= n; i++){
          //   sum = a + b;
          //   a = b;
          //   b = sum;
          //   cout << b << endl;
          //  }

        for (int i = 1; i <= 500; i++) {
int x = 0, temp = i;
while (temp > 0) {
int m = temp % 10;
x += m * m * m;
temp /= 10;
}
if (i == x) {
cout << i << endl;
}
}



}