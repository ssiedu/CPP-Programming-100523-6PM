#include<iostream>
#include<string.h>
using namespace std;
class String
{
	char str1[10];
	char str2[10];
	char str3[20];
	int len;
	public:
		void getStr()
		{
			cout<<"\n Enter string 1 : ";
			cin>>str1;
			cout<<"\n Enter string 2 : ";
			cin>>str2;
		}
		
		void getfun()
		{
			len=strlen(str1);
			cout<<"\n string length : "<<len;
			strcpy(str3,str1);
			cout<<"\n String copy : "<<str3;
			//strcat(str1,str2);
			//cout<<"\n concatenate : "<<str1;
			if(strcmp(str1,str2)==0)
				cout<<"\n Equal ";
			else
				cout<<"\n Not Equal ";
			cout<<" \n String upper : "<<strupr(str1);
			cout<<" \n String lower : "<<strlwr(str1);
			cout<<" \n String reverse : "<<strrev(str1);
		}
		
};
int main()
{
	String s;
	s.getStr();
	s.getfun();
	return 0;
}
