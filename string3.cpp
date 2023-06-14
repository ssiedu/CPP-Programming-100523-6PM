#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[20];
	//string str1;
	char str2[10];
	
	cout<<"\n Enter String 1";
	cin.getline(str1,20);
	cout<<"\n string is : "<<str1;
	cout<<"\n Enter string 2: ";
	cin.getline(str2,10);
	cout<<"\n string 2 : "<<str2;
	strcat(str1,str2);
	cout<<"\n concatenate : "<<str1;
	return 0;
}
