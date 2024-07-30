#include<iostream>
using namespace std;
int main() {
    // int a =5 , b , c;
    // b = a = 15;
    // c = a < 15;
    // cout << "a = " << a << " , b =  " << b << " , c = " << c; 

    // int x = 3;
    // float y = 3.0;
    // if(x == y)
    // cout << "x and y are equal .";
    // else
    // cout << "x and y are not equal .";

    // int test = 0;
    // cout << "First character " << '1' << endl;
    // cout << "Second character " << (test ? 3 : '1') << endl;

    // int a = 18; int b = 12;
    // bool t = (a > 20 && b < 15)? true : false;
    // cout << "Value of t : " << t;

    // int number = -4;
    // char result;
    // result = number > 0 ? 'p' : 'N';
    // cout << result << endl;
    
      int amount;
      int n1 , n2 , n5 , n10 , n20 ,n50 , n100 , n500;
      n1 = n2 = n5 = n10 = n20 = n50 = n100 = n500 = 0;
      cout << " Enter the amount : ";
      cin >> amount;
      switch(amount >= 500){
        case 1:
        n500 += amount/500;
        amount -= n500 * 500;
        break;
      }
      switch(amount >= 100){
        case 1:
        n100 += amount/100;
        amount -= n100 * 100;
        break;
      }
      switch(amount >= 50){
        case 1:
        n50 += amount/50;
        amount -= n50 * 50;
        break;
      }
      switch(amount >= 20){
        case 1:
        n20 += amount/20;
        amount -= n20 * 20;
        break;
      }
      switch(amount >= 10){
        case 1:
        n10 += amount/10;
        amount -= n10 * 10;
        break;
      }
      switch(amount >= 5){
        case 1:
        n5 += amount/5;
        amount -= n5 * 5;
        break;
      }
      switch(amount >= 2){
        case 1:
        n2 += amount/2;
        amount -= n2 * 2;
        break;
      }
      switch(amount >= 1){
        case 1:
        n1 += amount/1; 
        amount -= n1 * 1;
        break;
      }
     cout << " Notes of 500 are " << n500 << endl;
     cout << " Notes of 100 are " << n100 << endl;
     cout << " Notes of 50 are " << n50 << endl;
     cout << " Notes of 20 are " << n20 << endl;
     cout << " Notes of 10 are " << n10 << endl;
     cout << " Notes of 5 are " << n5 << endl;
     cout << " Notes of 2 are " << n2 << endl;
     cout << " Notes of 1 are " << n1 << endl;
}