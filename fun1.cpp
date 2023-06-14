#include<iostream>
using namespace std;
void add(); // function delaration
int main()
{
	add(); // function call
	return 0;
}
void add()
{
	int fnum,snum;
	cout<<"\n Enter First Number : ";
	cin>>fnum;
	cout<<"\n Enter Second Number : ";
	cin>>snum;
	cout<<"\n sum is : "<<fnum+snum;
}
