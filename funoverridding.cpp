#include<iostream>
using namespace std;
class A
{
	public:
		virtual void display()
		{
			cout<<"\n This is A class display function";
		}
};
class B : public A
{
	public:
		void display()
		{
			cout<<"\n This is class B display Function";
		}
};
int main()
{
	B obj;
	A *p;
	p=&obj;
	p->display();
	return 0;
}





