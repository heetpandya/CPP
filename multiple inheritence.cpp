#include<iostream>
using namespace std;
class add
{
	public:
		int a=10;
		int b=20;
		int c=a+b;
		void Add()
		{
			cout<<"add"<<c<<endl;
		}
};
class sub
{
	public:
		int x=10;
		int y=20;
		int z=x-y;
		void Sub()
		{
			cout<<"sub"<<z<<endl;
		}
};
class mul
{
	public:
		int e=10;
		int f=20;
		int g=e*f;
		void Mul()
		{
			cout<<"mul"<<g<<endl;
		}
};
class div
{
	public:
		int h=10;
		int i=20;
		int j=h/i;
		void Div()
		{
			cout<<"div"<<j<<endl;
		}
};
class modu:public add,public sub,public mul,public div
{
	public:
		int k=60;
		int l=5;
		int m=k%l;
		void mod()
		{
			cout<<"Remainder:"<<m<<endl;
		}
};
int main()
{
	modu m;
	m.mod();
	m.Add();
	m.Sub();
	m.Mul();
	m.Div();
	return 0;
}
