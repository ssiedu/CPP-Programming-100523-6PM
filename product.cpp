#include<iostream>
using namespace std;
class Product
{
	int fnum,snum,tnum,result;
	public:
		void getdata(int a,int b,int c)
		{
			fnum=a;
			snum=b;
			tnum=c;
		}
		void calProduct()
		{
			result=fnum*snum*tnum;
		}
		int display()
		{
			return result;
			//cout<<"\n product of three numbers : "<<result;
		}
};
int main()
{
	Product p;
	int a,b,c;
	cout<<"\n Enter First Number : ";
	cin>>a;
	cout<<"\n Enter Second Number : ";
	cin>>b;
	cout<<"\n Enter Third Number : ";
	cin>>c;
	p.getdata(a,b,c);
	p.calProduct();
	cout<<"\n Product of three number : "<<p.display();
	return 0;
}







