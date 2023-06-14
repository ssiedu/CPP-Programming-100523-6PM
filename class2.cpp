#include<iostream>
using namespace std;
class Student
{
	private:
	int rno;
	char name[10];
	float per;
	public:
	void getdata()
	{
		cout<<"\n Enter Student roll No :";
		cin>>rno;
		cout<<"\n Enter student Name : ";
		cin>>name;
		cout<<"\n Enter student percentage :";
		cin>>per;
	}
	void display()
	{
		cout<<"\n Student Roll No : "<<rno;
		cout<<"\n Student Name    : "<<name;
		cout<<"\n Student percentage : "<<per;
	}
};
int main()
{
	Student s;
	s.getdata();
	s.display();
	
	return 0;
}






