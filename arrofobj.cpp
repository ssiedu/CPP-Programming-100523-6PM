#include<iostream>
using namespace std;
class Add
{
	int fnum,snum;
	public:
		void getdata()
		{
			cout<<"\n Enter First Number : ";
			cin>>fnum;
			cout<<"\n Enter second Number : ";
			cin>>snum;
		}
		void display()
		{
			int sum=fnum+snum;
			cout<<"\n sum is : "<<sum;
		}
		
};

int main()
{
	Add a[10];
	int i,n;
	cout<<"\n How many times do you want to add of number : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<" \n Addition "<<i<<" : ";
		a[i].getdata();
		a[i].display();
	}
	return 0;
}




