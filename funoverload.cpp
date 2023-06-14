#include<iostream>
using namespace std;
int sum(int a, int b,int c)
{
	return a+b+c;
}
int sum(int a, int b)
{
	return a+b;
}
float sum(float a, float b)
{
	return a+b;
}
float sum(int a, float b)
{
	return a+b;
}
int main()
{
	cout<<"\n sum of two integer : "<<sum(10,20);
		cout<<"\n sum of two integer : "<<sum(50,20);
	cout<<"\n sum of three integer : "<<sum(10,2,3);
	cout<<"\n sumof two float value : "<<sum(1.2f,4.5f);
	cout<<"\n Two Different value type : "<<sum(10,2.3f);
	return 0;
}
