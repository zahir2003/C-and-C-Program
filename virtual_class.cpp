#include<iostream>
using namespace std;
class student
{
	protected:
		int roll_no;
		public:
			void set_number(int r)
			{
				roll_no=r;
			}
			void print_number()
			{
				cout<<"Roll no is = "<<roll_no<<endl;
			}
};
class Test:public virtual student
{
	protected:
		float math,physics;
		public:
			void set_marks(float ma,float ph)
			{
				math=ma;
			physics=ph;
			}
			void print_set()
			{
				cout<<"Physics marks is = "<<physics<<endl;
				cout<<"Maths marks is = "<<math<<endl;
			}
};
class Sports:public virtual student
{
	protected:
		float score;
		public:
			void set_score(float sc)
			{
				score=sc;
			}
			void print_score()
			{
				cout<<"Sports marks is = "<<score<<endl;
			}
};
class result:public Test,public Sports
{
	protected:
	float total;
	public:
		void display()
		{
			total=math+physics+score;
			print_number();
			print_set();
			print_score();
			cout<<"Your total marks are = "<<total<<" out of 300"<<endl;
		}
};
int main()
{
	result obj;
	obj.set_number(005);
	obj.set_marks(98.2,87.6);
	obj.set_score(86.9);
	obj.display();
}
