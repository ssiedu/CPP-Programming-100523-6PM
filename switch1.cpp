#include<iostream>
using namespace std;
int main()
{
	int ch;
	cout<<"\n Enter your choice in between (1-5) :";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"One";
			break;
		case 2:
			cout<<"Two";
			//break;
		case 3:
			cout<<"Three";
			break;
		case 4:
			cout<<"Four";
			break;
		case 5:
			cout<<"Five";
			break;
		default:
			cout<<"Invalid choice";
			break;
	}
	return 0;
}
