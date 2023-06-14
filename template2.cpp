#include<iostream>
using namespace std;
template <class T>
class Square
{
	public:
		T num;
		Square(T n1)
		{
			num=n1;
		}
		T getSquare();
		
};
template <class T>
T Square<T> :: getSquare()
{
	return num*num;
}
int main()
{
	Square <int> s(5);
	cout<<"\n Square of a number : "<<s.getSquare();
	Square <float> q(2.2);
	cout<<"\n Square of a float value : "<<q.getSquare();
	return 0;
}
