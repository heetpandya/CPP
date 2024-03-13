#include<iostream>
using namespace std;
const float pie=22/7;
inline float area(float r)
{
return (pie*r*r);
}
int main()
{
float radius;
cout<<"Enter radius:";
cin>>radius;
cout<<"Area="<<area(radius)<<endl;
}
