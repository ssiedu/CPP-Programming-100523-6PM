#include<iostream>
using namespace std;
class ABC;
class XYZ
{
	int x;
	public: 
	void getdata(int a)
	{
		x=a;
	}
	friend void max(XYZ,ABC);
};
class ABC
{
	int y;
	public:
		void getdata(int b)
		{
			y=b;
		}
	friend void max(XYZ,ABC);
};
void max(XYZ m , ABC n)
{
	if (m.x>n.y)
		cout<<m.x<<" is greater number";
	else
		cout<<n.y<<" is greater number";
}
int main()
{
	XYZ xyz;
	ABC abc;
	int a,b;
	cout<<"\n Enter the value of a: ";cin>>a;
	cout<<"\n Enter the value of b: ";cin>>b;
	xyz.getdata(a);
	abc.getdata(b);
	max(xyz,abc);
	return 0;
	
}











