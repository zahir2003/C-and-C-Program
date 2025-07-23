#include<iostream>
using namespace std;
int B();
void A(int x);
class A
{
	public:
	int n,rem,c=0;
	public:
	void A(int x)
	{
		n=x; 	
	}
	public int B()
	{
	rem=n%10;
	c=10*c+rem;
	n=n/10;
	if(c==x)
	{
		return c;
	}
	else
	{
		int a=n+591;
		c.out<<"The sum is = "<<a;
	}
	}
};

int main()
{
	A obj;
	c.out<<"Enter a number = ";
	c.in>>n;
	obj.A(195);
	obj.B();
	return 0;
}
