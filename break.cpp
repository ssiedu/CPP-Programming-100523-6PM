#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=10;i++)
	{
		if(i==5)
		{
			goto ABC;//continue;//break;
		}
		cout<<"\t"<<i;//1 2 3 4 5  8 9 10
	}
	ABC:
		cout<<"This is goto statement";
	return 0;
}
