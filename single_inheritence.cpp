#include<iostream>
using namespace std;
class polygon
{
	private:
		int length,height;
		public:
			void setvalue()
			{ 
			cout<<"Enter a number="<<endl;
			cin>>length>>height;
			}
		    int	puts()
			{
				return(length*height);
			}
};
class triangle:public polygon
{
	public:
		float area()
		{
			return(puts()*0.5);
		}
		void display()
		{
			cout<<"Area is="<<area();
				}		
};
/*void polygon::setvalue()
{
cout<<"Enter a number="<<endl;
cin>>height>>length;
 } 
 void triangle::display() 
 {
 	cout<<"Area of triangle is="<<area()<<endl;
 }*/
int main()
{
	triangle obj;
	obj.setvalue();
	obj.puts();
	obj.display();
	return 0;  
}
