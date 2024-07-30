#include<iostream>
using namespace std;
class A{
    public:
    int a = 10;
    int b = 20;
    void add(){
        cout << a+b << endl;
    }
};
class B : public A{
    public:
    void product(){
        cout << a*b << endl;
    }
};
int main(){
    A obj1;
    B obj2;
    A*ptr1;
    B*ptr2;
    ptr1 = &obj1;
    ptr2 = &obj2;
    ptr1->add();
    ptr2->product();
}