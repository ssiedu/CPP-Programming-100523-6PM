#include<iostream>
using namespace std;
int main()
{
	int *inum;
	float *fnum;
	
	inum= new int;
	fnum= new float;
	
	*inum=34;
	*fnum=12.45;
	
	cout<<"\n integer value : "<<*inum;
	cout<<"\n Float value : "<<*fnum;
	
	delete inum;
	delete fnum;
	
	return 0;
}
