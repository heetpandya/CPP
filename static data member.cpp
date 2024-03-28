#include<iostream>
#include<string>
using namespace std;
class  car
{
	 private:
	int car_id;
	char car_name[20];
	double price;
	
	public:
		
		static int static_member;
		
		car()
		{
			static_member++;
		}
void inp()
{
	cout<<"Enter the id of the car"<<endl;
	cin>>car_id;
	cout<<"Enter the car name of the car"<<endl;
	cin>>car_name;
	cout<<"Enter the price of the car"<<endl;
	cin>>price;
}
void disp()
{
   cout<<"id of the car:-  "<<car_id<<endl;
   cout<<"name of the car:-  "<<car_name<<endl;
   cout<<"price of the car:-  2"<<price<<endl;
}
};
int car::static_member =0;

int main()
{
	car c1;
	c1.inp();
	c1.disp();
	
	car c2;
	c2.inp();
	c2.disp();
	cout<<"no. of objects created in class";
	car::static_member;
	
	return 0;
}
