//Parameterized constructor / Default constructor 
#include<iostream>
using namespace std;
class Display
{
	int x;
	int y;
	public:
		Display(int,int);
		void display();
		
};
Display::Display(int a,int b)
{
	x=a;
	y=b;
}
void Display::display()
{
	int c;
	c=x*y;
	cout<<"The sum is = "<<c;
}
int main()
{
	int d,e;
	cout<<"Enter the number="<<endl;
	cin>>d>>e;
	Display obj(d,e);//=Display();//explicit call 
	obj.display();
	return 0;
}

