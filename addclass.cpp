#include<iostream>
using namespace std;
class Addition
{
	int fnum,snum,sum;
	public:
		void input()
		{
			cout<<"\n Enter First number : ";
			cin>>fnum;
			cout<<"\n Enter Second Number : ";
			cin>>snum;
		}
		void calculate()
		{
			sum=fnum+snum;
			cout<<"\n sum is : "<<sum;
		}
		
};
int main()
{
	Addition a,a1;
	a.input();
	a.calculate();
	//Addition a1;
	a1.input();
	a1.calculate();
	return 0;
}
