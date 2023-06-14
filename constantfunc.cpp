#include<iostream>
using namespace std;
class Number
{
	int fnum,snum,sum;
	public:
		void getdata();
		void display() const
		{
			cout<<"\n First Number : "<<fnum;
			cout<<"\n Second Number : "<<snum;
			//sum=fnum+snum;
			cout<<"\n Sum of two numbers : "<<sum;
		}
};
void Number :: getdata()
{
	cout<<"\n Enter First Number : ";
	cin>>fnum;
	cout<<"\n Enter Second Number : ";
	cin>>snum;
	sum=fnum+snum;
}
int main()
{
	Number n;
	n.getdata();
	n.display();
	return 0;
}



