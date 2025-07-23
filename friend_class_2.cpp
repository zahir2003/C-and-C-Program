#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		void getdata(int ,int );
		void display();
		friend class B;
};

void A::getdata(int x,int y)
{
	a=x;
	b=y;
}
void A::display()
{
cout<<"Value of a = "<<a<<endl;
cout<<"Value of b = "<<b<<endl;
}

class B
{
	public:
		void swap(A &i);
		};
		void B::swap(A &i)
		{
			int temp;
			temp=i.a;
			i.a=i.b;
			i.b=temp;
		}

int main()
{
	A obj;
	int x,y;
	cout<<"Enter the number = "<<endl;
	cin>>x>>y;
	obj.getdata(x,y);
	cout<<"Before swapping :"<<endl;;
	obj.display();
	B obj1;
	obj1.swap(obj);
	cout<<"After swapping :"<<endl;
	obj.display();
}
