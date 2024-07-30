#include<iostream>
using namespace std;
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
};
class B: public A
{
		protected:
				int b;
			
		public:
				void setB()
				{
					cout<<"Enter the Value of B=";
					cin>>b;
				}

};
class C: public B
{
	int c,p;
	public:
		void setC()
		{
				cout<<"Enter the Value of C=";
				cin>>c;
		}
			void calsum()
			{
				p=a+b+c;
				cout<<endl<< "sum is : " << p;
			}
};
int main()
{
	C c;
	c.setA();
	c.setB();
	c.setC();
	c.calsum();
}
