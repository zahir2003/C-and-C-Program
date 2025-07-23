//friend class
#include<iostream>
using namespace std;
class integer
{
	int x;
	int y;
	public:
		void getdata(int a,int b)
		{
			x=a;
			y=b;
		}
		void display()
		{
			cout<<"X is="<<x<<endl<<"Y is="<<y<<endl;
		}
		friend class swapinteger;
};
class swapinteger
{
	public:
		void swap(integer &i)
		{
			int temp;
			temp=i.x;
			i.x=i.y;
			i.y=temp;
		}
};
int main()
{
	int c,d;
	cout<<"Enter the value="<<endl;
	cin>>c>>d;
	integer obj;
	obj.getdata(c,d);
	cout<<"Before swapping:"<<endl;
	obj.display();
	swapinteger obj1;
	obj1.swap(obj);
	cout<<"After swapping:"<<endl;
	obj.display();
	return 0;   
}
