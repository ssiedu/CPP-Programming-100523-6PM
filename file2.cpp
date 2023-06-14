#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("C Program");
	fout<<"Array"<<endl;
	fout<<"String"<<endl;
	fout<<"Function"<<endl;
	fout<<"Pointer"<<endl;
	fout.close();
	fout.open("C++ Program");
	fout<<"Abstraction"<<endl;
	fout<<"Encapsulation"<<endl;
	fout<<"Inheritance"<<endl;
	fout<<"Polymorphism"<<endl;
	fout.close();
	ifstream fin;
	fin.open("C Program");
	char ch[80];
	cout<<"\n Content of C program File - \n";
	while(fin)
	{
		fin.getline(ch,80);
		cout<<ch<<endl;
	}
	fin.close();
	fin.open("C++ Program");
	cout<<"\n Content of c++ program File -\n";
	while(fin)
	{
		fin.getline(ch,80);
		cout<<ch<<endl;
	}
	fin.close();
	return 0;
}
