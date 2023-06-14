#include<iostream>
using namespace std;
class fact
{
	int n,f=1,i;
	public:
		void getdata()
		{
			cout<<"\n Enter any number : ";
			cin>>n;
		}
		void calculate()
		{
			for(i=1;i<=n;i++)
			{
				f=f*i;
			}
			cout<<"\n factorial is : "<<f;
		}
};
int main()
{
	fact f1;
	f1.getdata();
	f1.calculate();

	return 0;
}
