#include<iostream>
using namespace std;
int sum(int a,int b)
{
	return(a+b);
}
int sum(int x,int y,int z)
{
    return(x+y+z);	
}
int main()
{
	cout<<"6+9="<<sum(6,9);
	cout<<endl<<"9+2+3="<<sum(9,2,3);
	return 0;
}
