#include<iostream>
using namespace std;
class Largest
{
	int fnum,snum;
	public:
		void getdata()
		{
			cout<<"\n Enter First Number : ";
			cin>>fnum;
			cout<<"\n Enter Second Number : ";
			cin>>snum;
		}
		void display();
		int max();		
		
};

void Largest :: display()
{
	cout<<"\n First Number : "<<fnum;
	cout<<"\n Second Number : "<<snum;
	cout<<"\n Largest Number : "<<max();
}

int Largest :: max()
{
	if(fnum>snum)
		return fnum;
	else
		return snum;
}
int main()
{
	Largest l;
	l.getdata();
	l.display();
	cout<<"\n Maximum value : "<<l.max();
	return 0;
}




















