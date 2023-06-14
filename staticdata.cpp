#include<iostream>
using namespace std;
class Test
{
	int num;
	static int count;
	public:
		void getdata(int n)
		{
			num=n;
			count++;
		}
		void showvalue()
		{
			cout<<"\n Number of object created : "<<count;
		}
};
int Test :: count;
int main()
{
	Test t1,t2,t3;
	t1.showvalue();
	t2.showvalue();
	t3.showvalue();
	t1.getdata(100);
	t1.showvalue();
	t2.getdata(200);
	t3.getdata(300);
	t1.showvalue();
	t2.showvalue();
	t3.showvalue();
	return 0;
}







