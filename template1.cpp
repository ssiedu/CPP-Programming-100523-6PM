#include<iostream>
using namespace std;
template <typename T>
T add(T num1,T num2)
{
	T result;
	result=num1+num2;
	return result;
}
int main()
{
	int a=100;
	int b=200;
	cout<<"\n Addition : "<<add<int>(a,b)<<endl;
	float m=12.45;
	float n=2.34;
	cout<<"\n Addition : "<<add<float>(m,n)<<endl;
	return 0;
}
