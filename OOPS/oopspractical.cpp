#include<iostream>
using namespace std;
class Base{
    int x;
    public:
    virtual void func() = 0;
    int getX(){
        return x;
    }
};
class Derived : public Base{
    int y;
    public:
    void func(){
        cout << "Function called " << endl;
    }
};
int main(){
    Derived obj;
    obj.func();
}