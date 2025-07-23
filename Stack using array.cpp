
//STACK USING ARRAY

#include<stdio.h>
#include<stdlib.h>
int stack[100],choice,n,i,x,top;
int main()
{
	top=-1;
	void push();
	void pop();
	void display();
	printf("Enter stack size = ");
	scanf("%d",&n);
	printf("\n 1.Push  \n 2.Pop  \n 3.Display  \n 4.Exit");
	do
	{
		printf("\nEnter a choice = ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:printf("Stack Exit!!");
			break;
			default:printf("\nPlease enter a valid choice!!");
		}
	}
	while(choice!=4);
	return 0;
}

void push()
{
	if(top>=n-1)
	{
		printf("\nStack is overflow");
	}
	else
	{
		printf("Enter a value = ");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}

void pop()
{
	if(top<=-1)
	{
		printf("\nStack is underflow");
	}
	else
	{
		printf("\nThe deleted element is = %d",stack[top]);
		top--;
	}
}

void display()
{
	if(top>=0)
	{
		printf("\nStack element is = ");
		for(i=top;i>=0;i--)
		printf("%d  ",stack[i]);
	}
	else
	{
        printf("Stack is empty nothing to display!!");
	}
}
