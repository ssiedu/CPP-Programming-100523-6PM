#include<iostream>
using namespace std;
class Employee
{
	public:
		int age;
		string name;
		float sal;
		Employee()//default
		{}
		Employee(int a, string n,float s)//parameterized
		{
			age=a;
			name=n;
			sal=s;
		}
		Employee(const Employee &x)//copy constructor
		{
			age=x.age;
			name=x.name;
			sal=x.sal;
		}
		void display()
		{
			cout<<"Age of Employee : "<<age;
		    cout<<"\n Name of Employee : "<<name;
			cout<<"\n salary of Employee : "<<sal<<endl;
		}
		
};
int main()
{
	Employee emp(30,"ram",78000);
	emp.display();
	Employee e1(emp);
	e1.display();
	Employee e2=emp;
	e2.display();
	return 0;
}
