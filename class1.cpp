#include<iostream>
using namespace std;
class Student
{
		int roll_no;
		char name[10];
		float marks;
	public:
	void getdata()
	{
		cout<<"\n Enter student Roll number : ";
		cin>>roll_no;
		cout<<"\n Enter Student Name : ";
		cin>>name;
		cout<<"\n Enter Student Marks : ";
		cin>>marks;
	}
	void display()
	{
		cout<<"\n Student Roll Number : "<<roll_no;
		cout<<"\n Student Name : "<<name;
		cout<<"\n Student Marks :"<<marks;
	}
};
int main()
{
	Student s;
	s.getdata();
	s.display();
	//cout<<"\n roll Number is : "<<s.roll_no;
	return 0;
}






