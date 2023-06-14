#include<iostream>
using namespace std;
class Employee
{
	public:
		int age;
		string name;
		float sal;
		Employee(int a,string n,float s)
		{
			age=a;
			name=n;
			sal=s;	
		}
		void display()
		{
			cout<<"\n Age of Employee : "<<age;
			cout<<"\n Name of Employee : "<<name;
			cout<<"\n Salary of Employee : "<<sal;
		}
};
int main()
{
	Employee *ptr=new Employee(40,"Shyam",78000.23);
	ptr->display();
	Employee *ptr1=new Employee(30,"Sita",78965);
	ptr1->display();
	delete ptr;
	delete ptr1;
	return 0;
}



