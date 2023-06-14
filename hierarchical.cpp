#include<iostream>
using namespace std;
class Base
{
	protected:
	int fnum,snum;
	public:
		void getdata()
		{
			cout<<"\n Enter First Number : ";
			cin>>fnum;
			cout<<"\n Enter Second Number : ";
			cin>>snum;
		}
};
class Add : public Base
{
	int sum;
	public:
		void getAdd()
		{
			sum=fnum+snum;
			cout<<"\n Sum is : "<<sum;
		}
};
class Mul : public Base
{
	int mul;
	public:
		void getMUL()
		{
			mul=fnum*snum;
			cout<<"\n Multilication : "<<mul;
		}
};
class Sub: public Base
{
	int sub;
	public:
		void getSub()
		{
			sub=fnum-snum;
			cout<<"\n Subtraction : "<<sub;
		}
};

int main()
{
	Add a;
	a.getdata();
	a.getAdd();
	Sub s;
	s.getdata();
	s.getSub();
	Mul m;
	m.getdata();
	m.getMUL();
	return 0;
}


























