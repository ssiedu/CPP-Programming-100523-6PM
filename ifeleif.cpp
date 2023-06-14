#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\n Enter any number :";
	cin>>num;
	
	if(num%5==0 && num%7==0)
	cout<<"\n Number is divisible by both";
	else if(num%5==0)
	cout<<"\n Number is divisible by 5";
	else if(num%7==0)
	cout<<"\n Number is divisible by 7";
	else
	cout<<"\n Number is not divisible by 5 and 7";
	return 0;
}
