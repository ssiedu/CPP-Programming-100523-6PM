#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"\n Enter the value of a and b : ";
	cin>>a>>b;
	
	//int c= (a>b)?a:b;
	//cout<<"\n value of c : "<<c;
	
	(a>b) ? cout<<"\na is greater number "<<a : cout<<"\n b is greater number "<<b;
	
	
	return 0;
	
}
