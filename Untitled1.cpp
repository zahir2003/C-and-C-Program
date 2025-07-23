#include<iostream>
#include<cmath>
using namespace std;
class Areao
{
	int side;
	float length,breadth;
	float s1,s2,s3;
	public:
		float area(int);
		float area(float,float);
		float area(float,float,float);
};
float Areao::area(int a)
{
	side=a;
	return(side*side);
 } 
float Areao::area(float a,float b)
{
	length=a;
	breadth=b;
	return(length*breadth);
 } 
float Areao::area(float a,float b,float c)
{
	s1=a;
	s2=b;
	s3=c;
	float sp,ar;
	sp=(s1+s2+s3)/2;
	ar=sqrt(sp*(sp-s1)*(sp-s2)*(sp-s3));
	return(ar);
 } 
int main()
{
	Areao obj;
	cout<<"Area of square="<<obj.area(5)<<endl;
	cout<<"Area of triangle="<<obj.area(2.3,4.5)<<endl;
	cout<<"Area of rectangle="<<obj.area(2.5,5.6,7.5)<<endl;
	return 0;
}
