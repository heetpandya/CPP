#include<iostream>
using namespace std;
class perent
{
	public:
		void p()
		{
			cout<<"This is a perent class"<<endl;
			
		}
};
class child1:public perent
{
	public:
		void c1(){
			cout<<"this is 1 child class"<<endl;
		}
};
class child2:public perent
{
	public:
		void c2(){
			cout<<"this is 2 child class"<<endl;
		}
};
int main()
{
	child1 c1;
	c1.c1();
	
	child2 c2;
	c2.c2();
	return 0;
}
