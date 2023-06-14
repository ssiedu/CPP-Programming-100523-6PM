#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
const char *filename="Binary";
int main()
{
	float height[4]={15.66,7.5,145.86,150.70};
	ofstream fout;
	
	fout.open(filename);
	fout.write((char*)&height,sizeof(height));
	fout.close();
	for(int i=0;i<4;i++)
	height[i]=0;
	ifstream fin;
	fin.open(filename);
	fin.read((char*)&height,sizeof(height));
	for(int i=0;i<4;i++)
	{
		cout<<fixed;
		cout<<setw(10)<<setprecision(2)<<height[i];
	}
	fin.close();
	return 0;
	
}
