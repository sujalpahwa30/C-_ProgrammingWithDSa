#include<iostream>
using namespace std;
int main() {
    // while('a' < 'b')    // Infinite Loop
    // cout << "Malayalam is a palindrome ." << endl;

    // int i;
    // while(i = 10){
    //     cout << i << endl;
    //     i = i + 1;
    // }

    // int x = 4 , y = 0 , z;
    // while(x >= 0){
    //     x --;
    //     y ++;
    //     if(x == y)
    //     continue;
    //     else
    //     cout << x << " " << y << endl;
    // }  

        int x = 4 , y = 0 , z;
    while(x >= 0){
    if(x == y)
    break;
         else
        cout << x << " " << y << endl;
        x --;
        y ++;
    }

}