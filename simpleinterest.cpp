#include<iostream>
using namespace std;
class SI
{
	float p,r,t,si,total;
	public:
		void getdata();
		void calculate();
		void display();
};

void SI :: getdata()
{
	cout<<"\n Enter principle amount : ";
	cin>>p;
	cout<<"\n Enter rate of interest : ";
	cin>>r;
	cout<<"\n Enter time in year : ";
	cin>>t;
}

void SI :: calculate()
{
	si=(p*r*t)/100;
	total=p+si;
}
void SI :: display()
{
	cout<<"\n simple interest : "<<si;
	cout<<"\n total amount    : "<<total;
}

int main()
{
	SI s;
	s.getdata();
	s.calculate();
	s.display();
	return 0;
}















