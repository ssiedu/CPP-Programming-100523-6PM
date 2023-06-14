#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"\n Enter the value of a :";
	cin>>a;//5
	cout<<"\n Enter the value of b :";
	cin>>b;//10
	
	cout<<"\n Bitwise AND : "<<(a&b);
	cout<<"\n Bitwise OR  : "<<(a|b);
	cout<<"\n Bitwise NOt : "<<(~a);
	cout<<"\n Bitwise XOR : "<<(a^b);
	cout<<"\n Bitwise left shift : "<<(a<<1);
	cout<<"\n Bitwise Right shift : "<<(a>>1);
	return 0;
	
}
	
	
	
	
