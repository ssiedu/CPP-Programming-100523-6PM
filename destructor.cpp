#include<iostream>
using namespace std;
int count=0;
class Alpha
{
	public:
		Alpha()
		{
			count++;
			cout<<"\n number of onject created : "<<count;
		}
		~Alpha()
		{
			cout<<"\n number of object destroyed : "<<count;
			count--;
		}
	
};
int main()
{
	cout<<"\n In Main Block : ";
	Alpha a1,a2,a3,a4;
	{
		cout<<"\n In Block 1 : ";
		Alpha a5;
	}
	{
		cout<<"\n In Block 2 : ";
		Alpha a6;
	}
	cout<<"\n Re-Enter Main block : ";
	return 0;
}







