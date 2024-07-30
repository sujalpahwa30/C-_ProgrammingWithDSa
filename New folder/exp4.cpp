#include<iostream>
using namespace std;
// class Base{
//     public:
//     int x , y;
//     Base(){

//     }
//     Base(int a , int b){
//         x = a;
//         y = b;
//     }
//     void show(){
//         cout << x << " " << y;
//     }
//     Base operator+(Base c){
//         Base temp;
//         temp.x = x + c.x;
//         temp.y = y + c.y;
//         return temp;
//     }
// };
// int main(){
//     Base c1 , c2 , c3;
//     c1 = Base(10 , 20);
//     c2 = Base(20 , 40);
//     c3 = c1 + c2;
//     c3.show();
// }
class Number{
    public:
    int value;
    Number(int val){
        value = val;
    }
    Number operator-(){
        return Number(-value);
    }
};
int main(){
    Number num1(6);
    Number num2 = -num1;
    cout << "Value " << num1.value;
    cout << "Negative value " << num2.value;
}