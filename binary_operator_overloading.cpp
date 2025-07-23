#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
		complex()
		{
			a=0;
			b=0;
		}
		complex(int x,int y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"\n Values of a is = "<<a<<"  and values of b is = "<<b<<"i";
		}
		complex operator+(complex );
};
complex complex::operator+(complex ob)
{
	complex t;
	t.a=a+ob.a;
	t.b=b+ob.b;
	return t;
}
int main()
{
	complex ob1(2,3);
	complex ob2(4,5);
	ob1.display();
	ob2.display();
	complex ob3;
	ob3=ob1+ob2;
	ob3.display();
}
