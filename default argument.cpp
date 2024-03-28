#include<iostream>
using namespace std;
int sum(int a,int b,int c=5,int d=10)
{
	return a+b;
}
int main()
{
   cout<< "sum of 2 variable is : "<<sum(1,2)<<endl;
   return 0;
}
