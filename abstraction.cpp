#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int b,p;
	cout<<"\n Enter any number : ";
	cin>>b;
	cout<<"\n Enter power of a number : ";
	cin>>p;
	int result = pow(b,p);
	cout<<"\n value is : "<<result;
	return 0;
	
}
