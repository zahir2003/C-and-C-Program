//dynamic constructor

#include<iostream>   
using namespace std;
class array
{
	int size;
	int *p;
	public:
		array(int s)
		{
			size=s;
			p=new int[size];
		}
		void input()
		{
			for(int i=0;i<size;i++)
			{
			cout<<"Enter "<<i<<" values=";
			cin>>p[i];
			}
		}
		void display()
		{
			for(int i=0;i<size;i++)
			cout<<p[i]<<"\t";
		}
};
int main()
{   
    int a;
    cout<<"Enter the array size you want=";
    cin>>a;
	array obj(a);
	obj.input();
	obj.display();  
}
