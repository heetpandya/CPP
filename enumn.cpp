#include<iostream>
using namespace std;
int main()
{
	enum week{mon,tue,wed,thu,fri,sat,sun};
	week day = wed;
	
switch(day)	
{
case mon: cout<<"monday";
break;
case tue: cout<<"tuesday";
break;
case wed: cout<<"wednesday";
break;
case thu: cout<<"thursday";
break;
case fri: cout<<"friday";
break;
case sat: cout<<"saturday";
break;
case sun: cout<<"sunday";
break;
}
return 0;	
}
