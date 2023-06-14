#include<iostream>
using namespace std;
int fact(int n);
int main()
{
	int res,num;
	cout<<"\n Enter Number : ";
	cin>>num;
	res= fact(num);
	cout<<"\n factorial is : "<<res;
	return 0;
}
int fact(int n)
{
	int i,f=1;
	for (i=1;i<=n;i++)
	{
		f=f*i;
		//f=1*1=1
		//f=1*2=2
		//f=2*3=6
		//f=6*4=24
		//f=24*5=120
	}
	return f;
}
