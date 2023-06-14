#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\n Enter any number : ";
	cin>>num;
	if(num==0)
		cout<<"Number is Zero";
	else if(num>0)
	{
		cout<<"\n Positive Number";
		if(num%2==0)
		  cout<<"\n Even Number";
		else
		  cout<<"\n Odd Number";
	}
	else
	{
		cout<<"\n Negative Number ";
		if(num%2==0)
			cout<<"\n Even Number";
		else
			cout<<"\n Odd Number";
	}
	return 0;
}
