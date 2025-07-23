
//STACK USING LINKED LIST

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *top=NULL;
void push()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node *));
	printf("Enter a number = ");
	scanf("%d",&temp->data);
	temp->next=top;
	top=temp;
}

void pop()
{
	if(top==NULL)
	{
		printf("The stack is empty");
		return;
	}
	printf("Deleted data is = %d",top->data);
	struct node *temp;
	temp=top;
	top=temp->next;
	free(temp);
}

void display()
{
	if(top==NULL)
	{
		printf("The stack is empty");
		return;
	}
	struct node *temp;
	temp=top;
	printf("The data is:");
	while(temp!=NULL)
	{
		
		
		printf(" %d  ",temp->data);
		temp=temp->next;
	}
}

int main()
{
	int v;
	while(1)
	{
	printf("\n 1. Push  \n 2. Pop  \n 3. Display ");
	printf("\nEnter a choice = ");
	scanf("%d",&v);
	switch(v)
	{
		case 1: push();
		break;
		case 2: pop();
		break;
		case 3: display();
		break;
		default:printf("Please enter a valid input!!");
	}
   }
	return 0;
}
