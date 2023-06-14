#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class Inventory
{
	char name[10];
	int code;
	float cost;
	public:
		void readData();
		void writeData();
};
void Inventory::readData()
{
	cout<<"\n Enter Name : ";
	cin>>name;
	cout<<"\n Enter code : ";
	cin>>code;
	cout<<"\n Enter cost : ";
	cin>>cost;
}
void Inventory::writeData()
{
	cout<<setw(10)<<name<<setw(10)<<code<<setw(10)<<cost<<endl;
}
int main()
{
	Inventory item[3];
	fstream file;
	file.open("Stock.dat",ios::in|ios::out);
	cout<<"\n Enter Details for three items : \n";
	for(int i=0;i<3;i++)
	{
		item[i].readData();
		file.write((char*)&item[i],sizeof(item[i]));
	}
	file.seekg(0);
	cout<<"\n Details Are -\n";
	for(int i=0;i<3;i++)
	{
		file.read((char*)&item[i],sizeof(item[i]));
		item[i].writeData();
	}
	file.close();
	return 0;
}
