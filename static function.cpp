#include<iostream>
using namespace std;
class member
{
	 private:
	 	static int A;
	 	static int B;
	    static int C;
	    
	 public:
	 static void disp()
	 {
	   cout<<"The value of the A is :-  "<<A<<endl;
	   cout<<"The value of the B is :-  "<<B<<endl;
	   cout<<"The value of the A is :-  "<<C<<endl;	
	 }  
};
int member::A = 20;
int member::B = 30;
int member::C = 40;

int main()
{
	member mb;
	cout<<"Print the static member through object name:-  "<<endl;
	mb.disp();
	cout<<"Print the static member through class name:-  "<<endl;
	member::disp();
	return 0;
}
