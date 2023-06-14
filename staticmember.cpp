#include<iostream>
using namespace std;
class Test
{
	int code;
	static int count;
	public:
		void getdata()
		{
			code=++count;
		}
		void showcode()
		{
			cout<<"\n value of code : "<<code;
		}
		static void showcount()
		{
			cout<<"\n value of count : "<<count;
		}
};
int Test :: count;

int main()
{
	Test t1,t2;
	t1.getdata();
	t2.getdata();
	//Test :: showcount();
	Test t3;
	t3.getdata();
	Test :: showcount();
	t1.showcode();
	t2.showcode();
	t3.showcode();
	return 0;
}





