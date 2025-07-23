#include<iostream>
using namespace std;
class Addition
{
	int x,y;
	float z;
	public:
		float add(int a,int b,float c)
		{
	x=a;
	y=b;
	z=c;
	float sum;
	sum=x+y+z;
	cout<<"The addition is="<<sum<<endl;
 } 
};
 int main()
 {
 	Addition obj;
 	int d;
 	int e;
 	float f;
 	cout<<"Enter the numbers=";
 	cin>>d>>e>>f;
 	obj.add( d,e,f);
	 return 0; 
 }
