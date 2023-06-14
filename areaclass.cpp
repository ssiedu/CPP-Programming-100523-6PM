#include<iostream>
#define pi 3.14
using namespace std;
class Area
{
	float radius,area;
	public:
		void getradius()
		{
			cout<<"\n Enter radius of circle : ";
			cin>>radius;
		}
		void calArea()
		{
			area=pi*radius*radius;
		}
		void display()
		{
			cout<<"\n Area of a circle : "<<area;
		}
};
int main()
{
	Area a;
	a.getradius();
	a.calArea();
	a.display();
	return 0;
}




