#include<iostream>
using namespace std;
int num=50;
int main()
{
	int num=100;
	cout<<"the value of the local variable num"<<num;
    cout<<"the value of global variable num:"<<::num;
	return 0;	
}
