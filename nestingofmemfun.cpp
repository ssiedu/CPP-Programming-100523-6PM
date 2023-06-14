#include<iostream>
using namespace std;
class Even_odd
{
	int num;
	public:
		void getdata()
		{
			cout<<"\n Enter any number : ";
			cin>>num;
		}
		void display();
		void check();
};
void Even_odd :: display()
{
	cout<<"\n Number is : "<<num<<endl;
	check();
}
void Even_odd :: check()
{
	if(num%2==0)
		cout<<"Number is Even ";
	else
		cout<<"\n Number is odd ";
}
int main()
{
	Even_odd e;
	e.getdata();
	e.display();
	return 0;
}









