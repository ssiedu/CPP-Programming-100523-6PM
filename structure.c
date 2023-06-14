#include<stdio.h>
struct student
{
	int roll_no;
	char name[10];
	float marks;
	void getdata()
	{
		printf("\n Enter student Roll number : ");
		scanf("%d",&roll_no);
		printf("\n Enter Student Name : ");
		scanf("%s",&name);
		printf("\n Enter Student Marks : ");
		scanf("%f",&marks);
	}
	void display()
	{
		printf("\n Student Roll Number : %d",roll_no);
		printf("\n Student Name : %s",name);
		printf("\n Student Marks : %.2f",marks);
	}
};
int main()
{
	struct student s;
	s.getdata();
	s.display();
	return 0;
}






