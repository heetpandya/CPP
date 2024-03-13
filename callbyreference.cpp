#include<iostream>
using namespace std;
void swap(int *x,int*y)
{
	int swap;
	swap=*x;
	*x=*y;
	*y=swap;
	cout<<endl<<"a="<<*x<<"b="<<*y;
	
}
int main()
{
	int a=100,b=200;
	swap(&a,&b);
	return 0;
	
}

