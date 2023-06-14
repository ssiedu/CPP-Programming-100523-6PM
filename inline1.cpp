#include<iostream>
using namespace std;
inline void square(int n)
{
	cout<<"\n square of a number : "<<n*n;
}
int main()
{
	int num;
	cout<<"\n Enter any number : ";
	cin>>num;
	square(num);//	cout<<"\n square of a number : "<<n*n;
	square(5);//	cout<<"\n square of a number : "<<n*n;
	square(4);//	cout<<"\n square of a number : "<<n*n;
	return 0;
}
