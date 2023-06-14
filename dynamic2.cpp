#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\n Enter numbers of student : ";
	cin>>num;
	
	float *ptr;
	
	ptr= new float[num];
	
	cout<<"\n Enter percentage of Students : "<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<"\n student "<<i+1<<":";
		cin>>*(ptr+i);
	}
	cout<<"\n Student Records of percentage : "<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<"\n Student "<<i+1<<":"<<*(ptr+i);
	}
	delete[] ptr;
	return 0;
}
