#include<iostream>
using namespace std;
namespace First
{
	void Hello()
	{
		cout<<"\n Hello Function in first class";
	}
}
namespace second
{
	void Hello()
	{
		cout<<"\n Bye function in second class";
	}
}
using namespace second;
int main()
{
	//First::Hello();
	//second::Hello();
	Hello();
	Hello();
	return 0;
}
