#include<iostream>
using namespace std;
int sum(int a,int b)
{
	return a+b;
}
int sum(int a,int b,int c)
{
	return a+b+c;
}
int sum(double a,double b)
{
	return a+b;
}
int main()
{
   cout<< "sum of 2 variable is : "<<sum(2,3)<<endl;
   cout<< "sum of 3 variable is : "<<sum(2,3,5)<<endl;
   cout<< "sum of 2 double variable is : "<<sum(2.5,3.5)<<endl;
   return 0;
}
