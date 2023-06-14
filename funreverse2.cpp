#include<iostream>
using namespace std;
int reverse();
int main()
{
	int res=reverse();
	cout<<"\n Reverse Number : "<<res;
	return 0;
}
int reverse()
{
	int num,rev=0;
	cout<<"\n Enter Number : ";
	cin>>num;//1234
	while(num>0)
	{
		rev=rev*10+num%10;
		//rev = 0*10 + 1234%10
		// rev = 0+4 = 4
		// rev = 40+ 3 = 43
		//rev= 430+ 2 = 432
		//rev = 4320 +1 = 4321
		num=num/10; // num= 1/10 = 0
	}
	return rev;
	
	
	
}
