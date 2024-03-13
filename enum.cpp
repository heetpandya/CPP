#include<iostream>
using namespace std;
int main()
{
		enum Gender{male,female};
		Gender a=male;
		switch(a)
		{
				case male:
				cout<<"Gender is male";
				break;
				case female:
				cout<<" Gender isFemale";
				break;
				default:
				cout<<"invalid";
				break;
		}
		return 0;
}

