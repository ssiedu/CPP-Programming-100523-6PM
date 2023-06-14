#include<iostream>
using namespace std;
int main()
{
	int a=10,b=12,c;
	try
	{
		if(b==0)
			throw b;
		else if (b>a)
			throw "you can not declare denominator is greater than numerator";
		else
		{
			c=a/b;
			cout<<"\n value of c : "<<c;
		}
	}
	catch(int ex)
	{
		cout<<"\n you can not declare "<<ex<<" as a denominator";
	}
	catch(const char *ex1)
	{
		cout<<ex1;
	}
	return 0;
}
