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
		float rarea;
	public:
		void getRect()
		{
			rarea = l*b;
		}
};
class Third
{
	protected:
		float area,r;
	public:
		void getarea()
		{
			cout<<"\n Enter the radius of circle : ";
			cin>>r;
			area=3.14*r*r;
		}
};
class derive : public Second,public Third
{
	public:
		void display()
		{
			cout<<"\n Area of rectangle : "<<rarea;
			cout<<"\n Area of circle : "<<area;
		}
};

int main()
{
	derive d;
	d.getdata();
	d.getRect();
	d.getarea();
	d.display();
	return 0;
}


















