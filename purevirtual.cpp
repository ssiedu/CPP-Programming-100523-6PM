#include<iostream>
using namespace std;
class Area
{
	public:
		virtual float calArea()=0;
};
class Circle : public Area
{
	public:
		float r;
		Circle(float a)
		{
			r=a;
		}
		float calArea()
		{
			return 3.14*r*r;
		}
};
class Rect : public Area
{
	public:
		float l,b;
		Rect(float m, float n)
		{
			l=m;
			b=n;
		}
		float calArea()
		{
			return l*b;
		}
};
class Square : public Area
{
	public:
		float a;
		Square(float m)
		{
			a=m;
		}
		float calArea()
		{
			return a*a;
		}
};
int main()
{
	Area *a;
	Circle c(2);
	Rect r(2,5);
	Square s(5);
	a=&c;
	float r1=a->calArea();
	cout<<"\n Area of circle : "<<r1;
	
	a=&r;
	float r2=a->calArea();
	cout<<"\n Area of rectangle : "<<r2;
	
	a=&s;
	float r3=a->calArea();
	cout<<"\n Area of square : "<<r3;
	
	return 0;
	
	
	
	
	
	
	
}












