#include<iostream>
using namespace std;
int factorial(int n)
{
	if (n==0||n==1)
	{
			return 1;
	}
	return n*factorial(n-1);
	
}
int main()
{
	int num=7;
	cout<<"factorial of"<<num<<"is:"<<factorial(num)<<endl;
	return 0;
}
