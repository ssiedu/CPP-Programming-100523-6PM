#include<iostream>
using namespace std;
class Employee
{
	int id;
	char name[10];
	float sal;
	
	public:
		void getdata();
		void display();
};
void Employee :: getdata()
{
	cout<<"\n Enter Employee Id : ";
	cin>>id;
	cout<<"\n Enter Employee Name : ";
	cin>>name;
	cout<<"\n Enter Employee Salary : ";
	cin>>sal;
}
void Employee :: display()
{
	cout<<"\n Employee id : "<<id;
	cout<<"\n Employee Name : "<<name;
	cout<<"\n Employee Salary : "<<sal;
}
int main()
{
	Employee emp[10];
	int i,n;
	cout<<"\n How many Employees do you want to enter : ";
	cin>>n;
	cout<<"\n Enter Employee Information : "<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<"\n Employee "<<i<<":";
		emp[i].getdata();
	}
	cout<<"\n Display Information of Employee : "<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<"\n Employee "<<i<":";
		emp[i].display();
	}
	return 0;
}










