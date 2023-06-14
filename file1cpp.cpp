#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout("Item");
	char name[20];
	int id;
	float cost;
	cout<<"\n Enter Item Name : ";
	cin>>name;
	fout<<name<<"\n";
	cout<<"\n Enter Item Id : ";
	cin>>id;
	fout<<id<<"\n";
	cout<<"\n Enter cost of Item : ";
	cin>>cost;
	fout<<cost<<"\n";
	fout.close();
	ifstream fin("Item");
	fin>>name;
	fin>>id;
	fin>>cost;
	cout<<"\n Item Details : \n";
	cout<<"\n Item Name : "<<name;
	cout<<"\n Item Id   : "<<id;
	cout<<"\n Item Cost : "<<cost;
	fin.close();
	return 0;
	
	
	
	
	
	
}
