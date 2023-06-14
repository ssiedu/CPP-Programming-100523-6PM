#include<iostream>
using namespace std;
class Employee
{
	public:
		int age;
		string name;
		float sal;
		Employee()
		{
			age=40;
			name="Ram";
			sal=45000;
		}
		
};
int main()
{
	Employee emp;
	cout<<"Age of Employee : "<<emp.age;
	cout<<"\n Name of Employee : "<<emp.name;
	cout<<"\n salary of Employee : "<<emp.sal;
	return 0;
}
