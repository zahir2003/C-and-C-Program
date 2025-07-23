
//QUEUE USING LINKEDLIST

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front=NULL,*rear=NULL;
void insert()
{
	struct node *nw;
	nw=(struct node *)malloc(sizeof(struct node));
	printf("Enter a number = ");
	scanf("%d",&nw->data);
	if(rear==NULL)
	{
		rear=front=nw;
		nw->next=NULL;
	}
	else
	{
		rear->next=nw;
		nw->next=NULL;
		rear=nw;
	}	
}

void delet()
{
	struct node*temp;
	if(front==NULL)
	{
		printf("\nQueue is empty , nothing to delete");
		return;
	}
	else
	{
	    temp=front;
		printf("\nDeleted element is = %d",front->data);
		front=front->next;
		free(temp);	
	}
}

void display()
{
	if(front==NULL)	
	{
		printf("\nQueue is empty ,nothing to display");
		return;
	}
	struct node *nw;
	nw=front;
	printf("Element of queue is = ");
	while(nw!=NULL)
	{
	printf("%d  ",nw->data);
	nw=nw->next;
    }
}

int main()
{
	int n;
	while(1)
	{
	   printf("\n 1.Insert  \n 2.Delete  \n 3.Display  \n 4.Exit ");
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
	   	case 4:exit(1);
	   	default:printf("\nPlease enter a valid number!!");
	    }	
	}
}
