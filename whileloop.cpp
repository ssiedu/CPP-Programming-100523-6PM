#include<iostream>
using namespace std;
int main()
{
	char num;
	cout<<"\n Enter any number : ";
	cin>>num;
	char i='A';
	while(i<=num)
	{
		cout<<"\t"<<i;
		i++;
	}
	return 0;
}
