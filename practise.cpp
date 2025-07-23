#include<iostream>
using namespace std;
class swap
{   private:
	int x;
	int y;
	public:
		void getdata(int,int);
		void display();
		friend void swapdata(swap);
};
void swap::getdata(int a,int b)
{
	x=a;
	y=b;
 } 
 void swap::display()
 {
 	cout<<"x="<<x<<"Y="<<y<<endl;
 }
 void swapdata(swap obj1)
 {
    int temp=obj1.x;
 	obj1.x=obj1.y;
 	obj1.y=temp;
 }
 int main()
 {
   int c,d;
   //	swap obj;
 	cout<<"Enter x=";
	 cin>>c;
	 cout<<"Enter y=";
	 cin>>d; 
 	swap obj;
 	obj.getdata(c,d);
	 cout<<"Before swapping";
	 obj.display();
	 swapdata(obj);
	 cout<<"After swapping";
	 obj.display();
	 return 0;  
 }
