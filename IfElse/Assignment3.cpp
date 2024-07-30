#include<iostream>
using namespace std;
int main() {
    // int a;      // Greatest of two numbers
    // cout << "Enter first number :";
    // cin >> a;
    // int b;
    // cout << "Enter second number : ";
    // cin >> b;
    // if(a>b){
    //     cout << a << "is largest .";
    // }
    // else{
    //     cout << b << "is largest .";
    // }

    //    float r = 4;    // Check whether area is greater or circumference
    //    float pi = 3.14;
    //    float area = pi * r * r;
    //    float perimeter = 2 * pi * r;
    //    if(area>perimeter){
    //     cout << "Area is greater than circumference .";
    //    }
    //    else{
    //     cout << "Circumference is greater than area .";
    //    }
      
        // int n;
        // cout << "Enter the value of year : ";
        // cin >> n;
        // if(n%4 == 0) {
        //     cout << "This is a leap year .";
        // }
        // else {
        //     cout << "This is not a leap year .";
        // }

        // int l = 5;
        // int b = 7;
        // int perimeter = 2 * (l + b);
        // int area = l * b;
        // if (area > perimeter){
        //     cout << "Area is greater than perimeter .";
        // }
        // else {
        //     cout << "Perimeter is greater than area .";
        // }  

        // int a , b , c;
        // cout << "Enter first side :";
        // cin >> a;
        // cout << "Enter second side :";
        // cin >> b;
        // cout << "Enter third side : ";
        // cin >> c;
        // if((a == b) && (b == c) && (c ==a))
        // cout << "This is an equilateral triangle .";
        // else if((a == b) || (b == c) || (c == a))
        // cout << "This is an isosceles triangle .";
        // else
        // cout << "This is an scalene triangle .";

        // int a , b , c;
        // cout << "Enter marks of A : ";
        // cin >> a;
        // cout << "Enter marks of B : ";
        // cin >> b;
        // cout << "Enter marks of C : ";
        // cin >> c;
        // if(a<b && a<c)
        // cout << "A has the least marks .";
        // if(b<c && b<a)
        // cout << "B has the least marks .";
        // if(c<a && c<b)
        // cout << "C has the least marks .";

    //    int a = 500 , b ,c;
    //    if(a >= 400)
    //    b = 300;
    //    c = 200;
    //    cout << "value of b and c are respectively " << b << "and" << c;

    
    //    float x , y;
    //    cout << "Enter the coordinates of a point : ";
    //    cin >> x >> y;
    //    if(x == 0 && y == 0){
    //     cout << "The point lies on the origin .";
    //    }
    //    if(x == 0 && y != 0){
    //     cout << "The point lies on y axis .";
    //    }
    //    if(x != 0 && y == 0){
    //     cout << "The point lies on x axis .";
    //    }
    //    if( x != 0 && y != 0){
    //     cout << "The point lies in the plane .";
    //    }


        //  float x1 , y1 , x2 , y2 , x3 , y3 , slope1 , slope2;
        //  cout << "Enter first point (x1 , y1) : ";
        //  cin >> x1 >> y1;
        //  cout << "Enter second point (x2 , y2) : ";
        //  cin >> x2 >> y2;
        //  cout << "Enter third point (x3 , y3) : ";
        //  cin >> x3 >> y3;
        //  slope1 = (y2 - y1)/(x2 - x1);
        //  slope2 = (y3 - y2)/(x3 - x2);
        //  if(slope1 == slope2){
        //     cout << "All three points lie on the same line .";
        //  }
        //  else{
        //     cout << "All three points don't lie on the same line .";
        //  }
         
          char ch;
          cout << "Enter a character : ";
          cin >> ch;
          if((ch >= 'A' && ch <='Z') || (ch >= 'a' && ch <= 'z')){
            cout << ch << "is an alphabet . ";
          }
          else if((ch >= '0' && ch <= '9')){
            cout << ch << "is a digit . ";
          }
          else{
            cout << ch << "is a special character . ";
          }
}