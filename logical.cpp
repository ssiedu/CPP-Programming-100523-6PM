#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"\n Enter the value of a :";
	cin>>a;//17
	cout<<"\n Enter the value of b :";
	cin>>b;//4
	cout<<"\n Enter the value of c :";
	cin>>c;//4
	
	cout<<"\n AND  : "<<(a>b && a<c);//0
	cout<<"\n OR   : "<<(a>b || b==c);//1
	cout<<"\n Not  : "<<(!(a>b));//0
	cout<<"\n AND OR : "<<((a>c && b<c) || (c==c));//1
	cout<<"\n OR NOT : "<<(!(a>10 || b<15));//0
	cout<<"\n AND NOT : "<<((a>b) && !(b==c));//0
	cout<<"\n AND OR NOT : "<<(!((a>b && c>a) || b!=c));//1
	return 0;
	
}
	
	
	
	
