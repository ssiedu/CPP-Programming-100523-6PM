#include<iostream>
using namespace std;
class Sample
{
	float x,y;
	public:
		void getdata()
		{
			cout<<"\n Enter the value of x : ";
			cin>>x;
			cout<<"\n Enter the value of y : ";
			cin>>y;
		}
		friend float Mean(Sample);
};
float Mean(Sample s)
{
	return (s.x+s.y)/2;
}
int main()
{
	Sample x;
	x.getdata();
	cout<<"\n value of Mean : "<<Mean(x);
	return 0;
}




