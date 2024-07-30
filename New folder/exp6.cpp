#include<iostream>
using namespace std;
class Coordinate{
    private:
    int x;
    int y;
    public:
    Coordinate(int x , int y){
        this->x = x;
        this->y = y;
    }
    Coordinate operator++(){
        x++;
        y++;
        return * this;
    }
    Coordinate operator++(int){
        Coordinate temp(x,y);
        x++;
        y++;
        return temp;
    }
    void display(){
        cout << x << endl;
        cout << y << endl;
    }
};
int main(){
    Coordinate point(5 , 7);
    cout << "Original Values : " << endl;
    point.display();
    ++point;
    cout << "After prefix increment : ";
    point.display();
    point++;
    cout << "After postfix increment : ";
    point.display();
}