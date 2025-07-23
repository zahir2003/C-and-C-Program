
//QUEUE USING ARRAY

#include<stdio.h>
#include<stdlib.h>
#define max 50

void insert();
void delet();
void display();
int arr[max];
int front=-1;
int rear=-1;

int main()
{
	int choice;
	while(1)
	{
		printf("\n 1.Insert  \n 2.Delete  \n 3.Display  \n 4.Exit");
		printf("\nEnter choice = ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:insert();
			break;
			case 2:delet();
			break;
			case 3:display();
			break;
			case 4:exit(1);
			break;
			default:printf("\nEnter a valid number!!");
		}
	}
}

void insert()
{
	int n;
	if(rear==max-1)
	{
		printf("Queue is full!!");
	}
	else
	{
		if(front==-1)
		front=0;
		printf("Enter a number = ");
		scanf("%d",&n);
		rear=rear+1;
		arr[rear]=n;
	}
}

void delet()
{
	if(front==-1)
	{
		printf("Queue is empty nothing to delete!!");
		return;
	}
	else
	{
	    printf("Element deleted from queue is = %d ",arr[front]);
		front=front+1;	
	}
}

void display()
{
	int i;
	if(front==-1)
	{
		printf("Queue is empty, nothing to display!!");
		return;
	}
	else
	{
		printf("\nThe elements are = ");
		for(i=front;i<=rear;i++)
		printf("%d  ",arr[i]);
	}
}
	
