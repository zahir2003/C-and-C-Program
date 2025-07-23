#include<iostream>
using namespace std;
class Addition
{
	int x,y;
	public:
		Addition()
		{
			x=0;
	     	y=0;
		}
	     Addition(int var1,int var2)
		{
			x=var1;
			y=var2;
		}
		void Add()
		{
			int sum;
			sum=x+y;
			cout<<"The addition is = "<<sum<<endl;
		}
		Addition(Addition &s)
		{
			x=s.x;
			y=s.y;
		}
};
int main()
{
	Addition obj;
	Addition obj1(5,6);
	Addition obj2(obj1);
	obj1.Add();
//	obj.Add();
   //	obj2.Add();
}
