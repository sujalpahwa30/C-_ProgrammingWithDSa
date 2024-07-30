#include<iostream>
using namespace std;
class Shape{
    public:
    virtual double calculateArea() const = 0;
};
class Square : public Shape{
    private:
    double side;
    public:
    Square(double s){
        side = s;
    }
    double calculateArea() const override{
        return side*side;
    }
};
class Circle : public Shape{
    private:
    double radius;
    public:
    Circle(double r){
        radius = r;
    }
    double calculateArea() const override{
        return 3.14*radius*radius;
    }
};
int main(){
    double squareside , circleradius;
    cout << "Enter the side length of the square : ";
    cin >> squareside;
    cout << "Enter the radius of the circle : ";
    cin >> circleradius;
    Square square(squareside);
    Circle circle(circleradius);
    cout << "Area of the square : " << square.calculateArea() << endl;
    cout << "Area of the circle : " << circle.calculateArea() << endl;
}