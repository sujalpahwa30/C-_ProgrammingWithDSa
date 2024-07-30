#include<iostream>
using namespace std;
// class Vehicle{
//     public:
//     Vehicle(){
//         cout << "This is a car";
//     }
// };
// class Car : public Vehicle{

// };
// int main(){
//     Vehicle obj;
// }


class A
{
	protected:
	int a;
	
	public:
		void setA()
		{
			cout<<"Enter the Value of A=";
			cin>>a;
			
		}
		void dispA()
		{
			cout<<endl<<"Value of A="<<a;
		}
};


class B: public A
{
	int b,p;
	
	public:
		void setB()
		{
			setA();
			cout<<"Enter the Value of B=";
			cin>>b;
		}
		
		void dispB()
		{
			dispA();
			cout<<endl<<"Value of B="<<b;
		}
		
		void calproduct()
		{
			p=a*b;
			cout<<endl<<"Product of "<<a<<" * "<<b<<" = "<<p;
		}
		
};

int main()
{
	
	B b;
	b.setB();
	b.calproduct();
	
	return 0;
	
}
