#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"\nConstructor of A object";
		}
		~A()
		{
			cout<<"\nDestructor of a object";
		}
};
class B
{
	public:
		B()
		{
			cout<<"\nConstructor of B object";
		}
		~B()
		{
			cout<<"\nDestructor of B object";
		}
};
int main()
{ {
   A a1;
}
	{
		B b1;
	}
	return 0;
}
