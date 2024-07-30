#include<iostream>
using namespace std;
class Vehicle {
public:
	Vehicle() { 
        int a = 10;
        cout << a << endl;
        cout << "This is a Vehicle" << endl;
        cout << a+10 << endl;
         }
};
class Car : public Vehicle {

};
class Bus : public Vehicle {

};
int main()
{
	Car obj1;
	Bus obj2;
	return 0;
}
