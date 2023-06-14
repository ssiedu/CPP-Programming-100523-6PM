#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[]="mango";
	char str2[10];
	do
	{
		cout<<"\n Enter your favroite fruit ";
		cin>>str2;
	}while(strcmp(str2,str1)!=0);
	cout<<"\n Answer is correct !";
	return 0;
}
