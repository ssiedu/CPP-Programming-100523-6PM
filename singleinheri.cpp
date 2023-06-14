#include<iostream>
using namespace std;
class Base
{
	protected:
	float radius;
	public:
		void getradius()
		{
			cout<<"\n Enter radius of circle :";
			cin>>radius;
		}
};
class Derive : public Base
{
	float area;
	public:
		void getArea()
		{
			area=3.14*radius*radius;
			cout<<"\n Area of circle : "<<area;
		}
};

int main()
{
	Derive D;
	D.getradius();
	D.getArea();
	return 0;
}







