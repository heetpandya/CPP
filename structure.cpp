#include<iostream>
#include<string>
using namespace std;
struct student
{
	string name;
	int rollno;
	float SPI;
};
int main()
{
	student student1;
	
	student1.name = "Meet";
	student1.rollno = 7;
	student1.SPI = 9.56;
	
	cout<<"NAME : "<<student1.name<<endl;
	cout<<"ROLL NO  : "<<student1.rollno<<endl;
	cout<<"SPI :  "<<student1.SPI<<endl;
	return 0;
}
