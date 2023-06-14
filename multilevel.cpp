#include<iostream>
using namespace std;
class First
{
	protected:
		float l,b;
	public:
		void getdata()
		{
			cout<<"\n Enter length of rectangle : ";
			cin>>l;
			cout<<"\n Enter breadth of rectangle : ";
			cin>>b;
		}
};

class Second : public First
{
	protected:
		float area;
	public:
		void calculate()
		{
			area=l*b;
		}
};

class Third : public Second
{
	public:
		void display()
		{
			cout<<"\n length : "<<l;
			cout<<"\n breadth : "<<b;
			cout<<"\n Area of rectangle : "<<area;
		}
};

int main()
{
	Third T;
	T.getdata();
	T.calculate();
	T.display();
	return 0;
}










