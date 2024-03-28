#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n<=1)
	{
	return 1;
    }
    else 
    return n*factorial(n-1);
}
int main()
{
	int num;
	cout<<"enter the value of num:- "<<endl;
	cin>>num;
	factorial(num);
	cout<<"factorial is : "<<factorial(num)<<endl;
}
