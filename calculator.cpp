#include<iostream>
using namespace std;
int main()
{
	int fnum,snum;
	char ch;
	cout<<"\n Enter First Number : ";
	cin>>fnum;
	cout<<"\n Enter Second Number : ";
	cin>>snum;
	cout<<"\n Enter your choice : ";
	cin>>ch;
	switch(ch)
	{
		case '+':
			cout<<"\n addition is : "<<fnum+snum;
			break;
		case '-':
			cout<<"\n Subtraction is : "<<fnum-snum;
			break;
		case '*':
			cout<<"\n Multiplication : "<<fnum*snum;
			break;
		case '/':
			cout<<"\n division : "<<fnum/snum;
			break;
		default:
			cout<<"\n Invalid choice";
			break;
	}
	return 0;
}
