#include<iostream>
using namespace std;
class Max
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"\n Enter the value of x : ";
			cin>>x;
			cout<<"\n Enter the value of y : ";
			cin>>y;
		}
		void display();
		void Largest();
};
void Max :: display()
{
	cout<<"\n value of x : "<<x;
	cout<<"\n value of y : "<<y;
	cout<<"\n Largest value : ";
	Largest();
}
inline void Max :: Largest()
{
	cout<<((x>y)?x:y);
}
int main()
{
	Max m;
	m.getdata();
	m.display();
	return 0;
}



