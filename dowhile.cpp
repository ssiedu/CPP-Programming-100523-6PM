#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\n Enter any number : ";
	cin>>num;
	int i=65;
	do
	{
		cout<<"\t"<<char(i);
		i++;
	}while(i<=num);
	return 0;
}
