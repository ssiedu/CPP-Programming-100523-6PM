#include<iostream>
using namespace std;
class First
{
	protected:
		int amount;
	public:
		void getAmount()
		{
			cout<<"\n Enter principle amount : ";
			cin>>amount;
		}
};
class Second
{
	protected:
		int rate;
	public:
		void getrate()
		{
			cout<<"\n Enter rate of interest : ";
			cin>>rate;
		}
};
class Third
{
	protected:
		int time;
	public:
		void getTime()
		{
			cout<<"\n Enter time in year : ";
			cin>>time;
		}
};

class Derive : public First,public Second, public Third
{
	int SI;
	public:
		void display()
		{
			SI=(amount*rate*time)/100;
			cout<<"\n Simple interest : "<<SI;
		}
};
int main()
{
	Derive D;
	D.getAmount();
	D.getrate();
	D.getTime();
	D.display();
	return 0;
}








