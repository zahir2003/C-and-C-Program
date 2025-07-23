#include<stdio.h>
#include<stdlib.h>
#define MAX 50

void insert();
void delet();
void display();
int front=-1;
int rear =-1;
int arr[MAX];

int main()
{
	int n;
	while(1)
	{
		printf("\n 1.Insert  \n 2.Delete  \n 3.Display");
		printf("\nEnter a choice = ");
		scanf("%d",&n);
		switch(n)
		{
			case 1:insert();
			break;
			case 2:delet();
			break;
			case 3:display();
			break;
			default:printf("\nPlease enter a valid input!!");
		}
	}
	return 0;
}

void insert()
{
	if(rear==MAX-1)
	{
		printf("\nQueue is full,unable to insert!!");
		return;
	}
	if(front==-1)
	front=0;
	int a;
	printf("\nEnter a value = ");
	scanf("%d",&a);
	rear++;
	arr[rear]=a;
}

void delet()
{
	if(front==-1)
	{
		printf("\nQueue is empty,nothing to delete");
		return;
	}
	printf("\nThe deleted element is = %d",arr[front]);
	front++;
}

void display()
{
	if(front==-1)
	{
		printf("\nQueue is empty,nothing to display!!");
		return;
	}
	int i;
	printf("\nThe elements are = ");
	for(i=front;i<=rear;i++)
	printf("%d  ",arr[i]);
}
