#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\n Enter any number : ";
	cin>>num;
	cout<<"\n Natural Numbers :\n";
	for(int i=1;i<=num;i++)
	{
		if(i%2==0)
		    cout<<"\n"<<i;
	}
	cout<<"\n Odd Numbers :\n";
	for(int i=1;i<=num;i++)
	{
		if(i%2!=0)
		    cout<<"\n"<<i;
	}
		
	return 0;
}
