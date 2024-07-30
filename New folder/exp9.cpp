#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout << "Constructor Base Class" << endl;
    }
    virtual~Base(){
        cout << "Destructor Base Class" << endl;
    }
};
class Derived : public Base{
    public:
    Derived(){
        cout << "Constructor Derived Class" << endl;
    }
    ~Derived(){
        cout << "Destructor Derived Class" << endl;
    }
};
int main(){
    Base*bptr = new Derived;
    delete bptr;
}