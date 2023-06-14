#include<iostream>
using namespace std;
void swap(int *a, int *b);
int main()
{
	int x,y;
	cout<<"\n Enter the value of x : ";
	cin>>x;
	cout<<"\n Enter the value of y : ";
	cin>>y;
	cout<<"\n Before Function call : \n ";
	cout<<"\n value of x : "<<x;
	cout<<"\n value of y : "<<y;
	swap(&x,&y);//call by address
	cout<<"\n After Function call : \n ";
	cout<<"\n value of x : "<<x;
	cout<<"\n value of y : "<<y;
	return 0;
}
void swap(int *a, int *b)
{
	cout<<"\n Before swap :\n";
	cout<<"\n value of a : "<<*a;
	cout<<"\n value of b : "<<*b;
	int temp=*a;
	*a=*b;
	*b=temp;
	cout<<"\n After Swap : \n";
	cout<<"\n value of a : "<<*a;
	cout<<"\n value of b : "<<*b;
}






