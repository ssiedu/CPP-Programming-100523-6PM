#include<iostream>
using namespace std;
template <class T>
class Calculator
{
	public:
	T num1,num2;
	Calculator(T n1, T n2)
	{
		num1=n1;
		num2=n2;
	}
	void display()
	{
		cout<<"Addition : "<<num1<<"+"<<num2<<"="<<add(num1,num2)<<endl;
		cout<<"Subtarction : "<<num1<<"-"<<num2<<"="<<sub(num1,num2)<<endl;
		cout<<"Multiplication : "<<num1<<"*"<<num2<<"="<<mul(num1,num2)<<endl;
		cout<<"Division : "<<num1<<"/"<<num2<<"="<<div(num1,num2)<<endl;
	}
	
	T add(T num1, T num2)
	{
		return num1+num2;
	}
	T sub(T num1 ,T num2)
	{
		return num1-num2;
	}
	T mul(T num1, T num2)
	{
		return num1*num2;
	}
	T div(T num1, T num2)
	{
		return num1/num2;
	}
	
};

int main()
{
	Calculator<int> c(100,20);
	cout<<"\n Result is : \n";
	c.display();
	Calculator<float> f(5.25,2.2);
	cout<<"\n Float value result : \n";
	f.display();
	return 0;	
}









