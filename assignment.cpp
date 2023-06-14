#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"\n Enter the value of a :";
	cin>>a;//17
	cout<<"\n Enter the value of b :";
	cin>>b;//5
	
	a+=b;//a=a+b
	cout<<"a=" << a<<" b="<<b<<endl;//a=22 b=5
	a-=b;
	cout<<"a=" << a<<" b="<<b<<endl;//a=17 b=5
	b*=a;
	cout<<"a=" << a<<" b="<<b<<endl;//a=17 b=85
	a/=b;//a=a/b  
	cout<<"a=" << a<<" b="<<b<<endl;//a=0 b= 85
	a%=b;
	cout<<"a=" << a<<" b="<<b<<endl;//a=0 b=85
	
	return 0;
}
	
	
	
	
