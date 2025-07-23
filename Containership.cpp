#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		void input();
};
void A::input()
{
	cout<<"Enter 1st input = ";
	cin>>x;
	cout<<"The 1st data is = "<<x<<endl;
}
class B
{
	int y;
    A obj;
	public:
		void output();
};
void B::output()
{
	cout<<"Enter 2nd input = ";
	cin>>y;
	cout<<"The 2nd data is = "<<y<<endl;
	obj.input();
}
int main()
{
	B obj1;
	obj1.output();
}
