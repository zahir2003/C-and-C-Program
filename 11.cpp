#include<iostream>
using namespace std;
class Array
{
	int size;
	int *p;
	public:
		Array(int s)
		{
			size=s;
			p=new int[size];
		}
		void input()
		{
			for(int i=0;i<size;i++)
			{
			   cout<<"Enter  "<<i<<"  value=";
			   cin>>p[i];	
			}
		}
		void display()
		{
			for(int i=0;i<size;i++)
			cout<<p[i]<<"  \t  ";
		}
};
int main()
{
	Array obj(5);
	obj.input();
	obj.display();
	return 0;
	
}
