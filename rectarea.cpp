#include<iostream>
using namespace std;
class RectArea
{
	float length,breadth,area;
	public:
		void getdata(float l, float b)
		{
			length=l;
			breadth=b;
			
		}
		void calArea()
		{
			area=length*breadth;
		}
		void display()
		{
			cout<<"\n Area of rectangle : "<<area;
		}
};
int main()
{
	RectArea r;
	float a,b;
	cout<<"\n Enter length of rectangle : ";
	cin>>a;
	cout<<"\n Enter breadth of rectangle : ";
	cin>>b;
	r.getdata(a,b);
	r.calArea();
	r.display();
	return 0;
}
