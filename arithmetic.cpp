#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	int a,b,sum,div,mul,sub,mod;
	cout<< "enter any 2 number :- ";
	cin>>a>>b;
	sum=a+b;
	cout<<"\n ADDITION : "<<sum ;
	mul=a*b;	
	cout<<"\n MULTIPLICATION : "<<mul ;
	div=a/b;	
	cout<<"\n DIVISION : "<<div ;
	sub=a-b;	
	cout<<"\n SUBTRACTION : "<<sub ;
	mod=a%b;	
	cout<<"\n MODULUS : "<<mod ;
	    
	return 0;
}
