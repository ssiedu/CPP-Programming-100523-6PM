#include<iostream>
using namespace std;
class Time
{
	int hour,minute;
	public:
		void getdata(int h, int m)
		{
			hour=h;
			minute =m;
		}
		void display()
		{
			cout<<hour<< " hr :"<<minute<<" min"<<endl;
		}
		void sum(Time,Time);
};

void Time :: sum(Time t1,Time t2)
{
	minute = t1.minute + t2.minute;
	hour= minute/60;
	minute = minute%60;
	hour = hour+t1.hour+t2.hour;

}

int main()
{
	Time t1,t2,t3;
	t1.getdata(2,30);
	t2.getdata(3,43);
	t3.sum(t1,t2);
	cout<<"\n t1 time : ";
	t1.display();
	cout<<"\n t2 time : ";
	t2.display();
	cout<<"\n t3 time : ";
	t3.display();
	return 0;
}









