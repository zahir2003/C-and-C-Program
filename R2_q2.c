#include<stdio.h>
int A(int x)
{
	int n,rem,c=0;
    rem=n%10;
	c=10*c+rem;
	n=n/10;
	if(c==x)
	{
		return c;
	}
	else
	{
		int a=n+591;
		printf("The sum is = ",a);
		scanf("%d",&a);
	}
	
}

int main()
{
	int n,rem,c=0,a;
	printf("Enter a number = ");
	scanf("%d",&n);
	A(a);
}
	
	

