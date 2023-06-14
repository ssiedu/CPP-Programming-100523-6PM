#include<iostream>
using namespace std;
class A
{
	int a,b,c;
	public:
		void getdata()
		{
			cout<<"\n Enter the value of a : ";
			cin>>a;
			cout<<"\n Enter the value of b : ";
			cin>>b;
		}
		void getExp()
		{
		
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
	}

};
int main()
{
	A a;
	a.getdata();
	a.getExp();
	return 0;
}





