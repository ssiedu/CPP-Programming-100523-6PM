#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	char string[50];
	cout<<"\n Enter a String : ";
	gets(string);
	int len=strlen(string);
	fstream file;
	file.open("Text",ios::in|ios::out);
	for(int i=0;i<len;i++)
	file.put(string[i]);
	file.seekg(0);
	char ch;
	while(file)
	{
		file.get(ch);
		cout<<ch;
	}
	file.close();
	return 0;
	
}
