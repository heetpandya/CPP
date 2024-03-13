#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int b=6;
	int bitwise_and=a&b;
	int bitwise_or=a|b;
	int bitwise_xor=a^b;
	int bitwise_not=~a;
	int left_shift=a<<1;
	int right_shift=a>>2;
    cout<<endl<<"and:"<<bitwise_and;
	cout<<endl<<"or:"<<bitwise_or;
	cout<<endl<<"xor:"<<bitwise_xor;
	cout<<endl<<"not:"<<bitwise_not;
	cout<<endl<<"left_shift:"<<left_shift;
	cout<<endl<<"right_shift:"<<right_shift;
	return 0; 
}
