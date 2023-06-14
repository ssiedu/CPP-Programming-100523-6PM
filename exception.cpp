#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\n Enter any number : ";
	cin>>num;
	try
	{
		if (num>0)
			cout<<"\n Positive Number ";
		else
			throw num;
	}
	catch(int ex)
	{
		cout<<"\n 404 server not found";
	}
	return 0;
}
