#include<iostream>
#include<math.h>
using namespace std;
class power
{
	int b,p;
	public:
		void getdata()
		{
			cout<<"\n Enter any number : ";
			cin>>b;
			cout<<"\n Enter power of a number : ";
			cin>>p;
		}
		void calpower()
		{
			int result = pow(b,p);
			cout<<"\n value is : "<<result;
		}
};
int main()
{
	power p1;
	p1.getdata();
	p1.calpower();
	return 0;
	
}
