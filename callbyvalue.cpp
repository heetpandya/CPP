#include<iostream>
using namespace std;
void change(int oop);
int main()
{
	int oop=5;
	change(oop);
	cout<<"value of data is:"<<oop;
	return 0; 
}
void change(int oop)
{
	oop=10;
}
