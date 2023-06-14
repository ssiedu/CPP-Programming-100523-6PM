#include<iostream>
using namespace std;
void swap(int a, int b);
int main()
{
	int x,y;
	cout<<"\n Enter the value of x : ";
	cin>>x;
	cout<<"\n Enter the value of y : ";
	cin>>y;
	swap(x,y);
	return 0;
}
void swap(int a, int b)
{
	cout<<"\n Before swap :\n";
	cout<<"\n value of a : "<<a;
	cout<<"\n value of b : "<<b;
	int temp=a;
	a=b;
	b=temp;
	cout<<"\n After Swap : \n";
	cout<<"\n value of a : "<<a;
	cout<<"\n value of b : "<<b;
}






