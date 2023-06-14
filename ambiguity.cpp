#include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			cout<<"\n Class A ";
		}
};
class B
{
	public:
		void display()
		{
			cout<<"\n Class B";
		}
};
class C : public A, public B
{
	public:
		void show()
		{
			A::display();
			B::display();
		}
};
int main()
{
	C x;
	x.show();
	return 0;
}



