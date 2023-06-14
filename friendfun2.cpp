#include<iostream>
using namespace std;
class Second;
class First
{
	int x;
	public:
		void getdata(int a)
		{
			x=a;
		}
		void display()
		{
			cout<<"\n value of x : "<<x;
		}
		friend void exchange(First & , Second &);
};
class Second
{
	int y;
	public:
		void getdata(int b)
		{
			y=b;
		}
		void display()
		{
			cout<<"\n value of y : "<<y;
		}
		friend void exchange(First &,Second &);
};
void exchange(First &f,Second &s)
{
	int temp = f.x;
	f.x= s.y;
	s.y= temp;
}
int main()
{
	First obj1;
	Second obj2;
	obj1.getdata(100);
	obj2.getdata(200);
	cout<<"\n Before swap : "<<endl;
	obj1.display();
	obj2.display();
	cout<<"\n After Swapping : "<<endl;
	exchange(obj1,obj2);
	obj1.display();
	obj2.display();
	return 0;
	
}
















