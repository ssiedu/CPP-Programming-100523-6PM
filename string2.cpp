#include<iostream>
using namespace std;
int main()
{
	string str1;
	string str2;
	string str3;
	string str4;
	int len;
	
	cout<<"\n Enter string 1 : ";
	cin>>str1;
	cout<<"\n Enter string 2 : ";
	cin>>str2;
	
	len = str1.size();
	cout<<"\n string length : "<<len;
	
	len = str2.size();
	cout<<"\n string length : "<<len;
	
	str3=str1+str2;
	cout<<"\n String concatenate : "<<str3;
	
	str4=str1;
	cout<<"\n string copy : "<<str4;
	
	return 0;
	
	
	
	
}
