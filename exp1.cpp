#include<iostream>
using namespace std;
int main()
{
	int age=10;
	try
	{
		if(age>=18)
			cout<<"\n Person is eligible for vote";
		else
			throw age;
	}
	catch(int ex)
	{
		cout<<"\n Person is not eligible for vote becoz ur age is"<<ex;
	}
	return 0;
}
