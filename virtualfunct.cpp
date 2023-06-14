#include<iostream>
using namespace std;
class A
{
	public:
		virtual void display()
		{
			cout<<"\n This is A class display function";
		}
		void show()
		{
			cout<<"\n Class A show Function ";
		}
};
class B : public A
{
	public:
		void display()
		{
			cout<<"\n This is class B display Function";
		}
		void show()
		{
			cout<<"\n class B Show function";
		}
};
int main()
{
	B obj;
	A *p;
	p=&obj;
	p->display();
	p->show();
	return 0;
}





