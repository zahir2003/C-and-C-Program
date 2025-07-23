#include <iostream>
using namespace std;
class B;
class A
{ 
  
float a;
 public:
    void getdata();
    friend float mean(A,B);
};

class B
{ 
  
float b;
public:
    void getdata();
    friend float mean(A,B);
};

void A::getdata()
{
    cout<<"Enter the number = ";
    cin>>a;
}

void B::getdata()
{
    cout<<"Enter the number = ";
    cin>>b;
}

float mean(A ob1, B ob2)
{
    return((ob1.a+ob2.b)/2);
}

int main()
{
    A obj1;
    B obj2;
    obj1.getdata();
    obj2.getdata();
    cout<<"Mean="<<mean(obj1,obj2);
}
