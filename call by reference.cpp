#include<iostream>
using namespace std;
void increment(int &a)
{
	++a;
   
}
int main()
{
	int num=5;
	 increment(num);
	cout <<"pointer value:- "<<num;
	return 0;
}
