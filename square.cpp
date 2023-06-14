#include<iostream>
using namespace std;
class square
{
	int num,s,c;
	public:
		void getdata()
		{
			cout<<"\n Enter any number : ";
			cin>>num;
		}
		void calculate()
		{
			s=num*num;
			c=num*num*num;
		}
		void display()
		{
			cout<<"\n square of a number : "<<s;
			cout<<"\n cube of a number   : "<<c;
		}
}s;//global object

int main()
{
	//square s; // local object
	s.getdata();
	s.calculate();
	s.display();
	return 0;
}




