#include<iostream>
using namespace std;
class Employee
{
	public:
		int age;
		string name;
		float sal;
		Employee(int a, string n,float s)
		{
			age=a;
			name=n;
			sal=s;
		}
		void display()
		{
			cout<<"Age of Employee : "<<age;
		    cout<<"\n Name of Employee : "<<name;
			cout<<"\n salary of Employee : "<<sal;
		}
		
};
int main()
{
	Employee emp(30,"ram",78000);
	emp.display();
	return 0;
}
