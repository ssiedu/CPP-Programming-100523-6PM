#include<iostream>
using namespace std;
class count
{
	public:
	int value;
		count()
		{
			value =5;
		}
		void operator++()
		{
			value = value + 1;
		}
		void display()
		{
			cout<<"\n value is : "<<value;
		}
};

int main()
{
	count c1;
	++c1;// call
	c1.display();
	return 0;
}




