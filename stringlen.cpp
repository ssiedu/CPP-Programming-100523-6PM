#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int len;
	char str[20];
	char str1[20];
	char str2[20];
	cout<<"\n Enter any string : ";
	cin>>str;
	cout<<"\n Enter another string : ";
	cin>>str1;
	len=strlen(str);
	cout<<"\n length of string : "<<len;
	//cout<<"\n String Upper Case : "<<strupr(str);
	//cout<<"\n String Lower case : "<<strlwr(str);
	//cout<<"\n string reverse    : "<<strrev(str);
	//strcpy(str2,str1);
	//cout<<"\n string copy : "<<str2;
	//strcat(str,str1);
	//cout<<"\n concatenate string : "<<str;
	
	if(strcmp(str,str1)==0)
		cout<<"\n Strings are equal ";
	else
		cout<<"\n Not Equal ";
	
	
	return 0;
}
