#include<iostream>
using namespace std;
class B;
class A
{
	int a;
	public:
		void input_data(int);
		void output();
		friend int exchange(A,B);
};
void A::input_data(int x)
{
	a=x;
}
void A::output() 
{
	cout<<"\n"<<a;
}
class B
{
	int b;
	public:
		void input_data(int);
		void output();
		friend int exchange(A,B);
};
void B::input_data(int y)
{
	b=y;
 } 
void B::output()
{
	cout<<" \t "<<b;
}
int exchange(A obj1,B obj2)
{
	int temp;
	temp=obj1.a;
	obj1.a=obj2.b;
	obj2.b=temp;
	cout<<"\n"<<obj1.a<<" \t "<<obj2.b;
}
int main()
{
	A obj1;
	B obj2;
	int p,q;
	cout<<"Enter two number=";
	cin>>p>>q;
	cout<<"\n Before swapping";
	obj1.input_data(p);
	obj1.output();
	obj2.input_data(q);
	obj2.output();
	cout<<"\n After swapping";
	exchange(obj1,obj2);
	return 0;
}
