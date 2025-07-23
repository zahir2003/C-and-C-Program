
//DOUBLY LINKED LIST; 

#include<stdio.h>
#include<stdlib.h>
struct dnode 
{
	int data;
	struct dnode *next;
	struct dnode *preve;
};
struct dnode *head=NULL;
void add_at_begin()
{
	struct dnode *temp;
	temp = head;
	int num;

	printf("Enter the number: ");
	scanf("%d", &num);

	temp = (struct dnode*)malloc(sizeof(struct dnode));
	temp->data = num;
	temp->preve=NULL;
	
	temp->next = head;
	head = temp;
}
void append()
{
	struct dnode *temp,*nw;
	if(head == NULL)
	{
		temp =(struct dnode*)malloc(sizeof(struct dnode));
		printf("\n Enter an integer no:");
		scanf("%d",&temp->data);
		temp->next=head;
		temp->preve=head;
		head=temp;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		nw=(struct dnode*)malloc(sizeof(struct dnode));
		printf("\n Enter an integer no:");
		scanf("%d",&nw->data);
		nw->next=NULL;
		nw->preve=temp;
		temp->next=nw;
		
	}
}
void add_after()
{
struct dnode *temp,*nw;
int pos,i,num;
printf("\n Enter the insert position:");
scanf("%d",&pos);

    if (head==NULL)
    {
        printf("The list is empty.\n");
        return;
    }
temp=head;
for(i=1;i<pos;i++)
{
	temp=temp->next;
	if(temp==NULL)
	{
		printf("\n There are less than %d nodes",pos);
		return;
	}
	
}
nw=(struct dnode*)malloc(sizeof(struct dnode));
printf("\n Enter an integer no:");
scanf("%d",&nw->data);
nw->preve=temp;
nw->next=temp->next;
temp->next->preve=nw;
temp->next=nw;

}
void delet()
{
	if (head==NULL)
    {
        printf("The list is empty.\n");
        return;
    }
    struct dnode *temp,*old;
    int num;
    printf("Enter delete number:");
    scanf("%d",&num);
    temp=head;
    while(temp!=NULL)
    {
    	if(temp->data==num)
    	{
    		if(temp==head)
    		{
    			head=temp->next;
    			temp->next->preve=NULL;
			}
			else
			{
				old->next=temp->next;
				temp->next->preve=old;
			}
			free(temp);
			printf("Element %d is deleted!!",num);
			return;
		}
		else
		{
			old=temp;
			temp=temp->next;
		}
	}
	printf("%d Element is not exist in this linked list",num);
}
int count()
{
	 if (head==NULL)
    {
        printf("The list is empty.\n");
        return 0;
    }
struct dnode *temp;
temp=head;
int c=0;
while(temp!=NULL)
{
	c++;
	temp=temp->next;
}
return c;
}
void display()
{
    if (head==NULL)
    {
        printf("The list is empty.\n");
        return;
    }
     struct dnode *temp;
     temp=head;
     printf("The data =\n");
     while(temp!=NULL)
     {
     	printf("%d \n",temp->data);
     	temp=temp->next;
	 }
	
}
void reverse_p()
{
	if (head==NULL)
    {
        printf("The list is empty.\n");
        return;
    }
    int size=count();
    int a[size],i;
    struct dnode *temp;
    temp=head;
    while(temp!=NULL)
    {
    	a[i++]=temp->data;
    	temp=temp->next;
	}
    printf("Data part of linked list in reverse:\n");
    for(i=size-1;i>=0;i--)
    {
    	printf("%d\n",a[i]);
	}
}
void reverse()
{
		if (head==NULL)
    {
        printf("The list is empty.\n");
        return;
    }
    struct dnode *x,*y,*z;
    x=head;
    y=NULL;
    while(x!=NULL)
    {
    	z=y;
    	y=x;
    	x=x->next;
    	y->preve=x;
    	y->next=z;
	}
	head=y;
}
void bubble_s()
{
	if (head==NULL)
    {
        printf("The list is empty.\n");
        return;
    }
     int n=count(),a,i,j;
	struct dnode *temp;
	for(i=0;i<n-1;i++)
	{
		temp=head;
			for(j=0;j<n-1;j++)
    	{
    		if(temp->data>temp->next->data)
    		{
    			a=temp->data;
    			temp->data=temp->next->data;
    			temp->next->data=a;
			}
		temp=temp->next;
	}
}
printf("Linked list is sorted");
}
void selection_s()
{
		if (head==NULL)
    {
        printf("The list is empty.\n");
        return;
    }
    int n=count(),a,i,j;
    struct dnode *temp,*sort;
    temp=head;
    sort=temp->next;
    for(i=0;i<n-1;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(temp->data>sort->data)
    		{
    			a=temp->data;
    			temp->data=sort->data;
    			sort->data=a;
			}
			sort=sort->next;
		}
		temp=temp->next;
		sort=temp->next;
		
	}
	printf("Linked list is sorted");
}
int main()
{
	int v;
	while(1)
	{
		printf("\n ENTER YOUR CHOICE");
		printf("\n1:Add at begin  ");
		printf("\n2:Append");
		printf("\n3:Add after");
		printf("\n4:Delete");
		printf("\n5:Count");
		printf("\n6:Display");
		printf("\n7:Reverse print");
		printf("\n8:Reverse");
		printf("\n9:Bubble sort");
		printf("\n10:Selection sort");
		printf("\n11:Exit");
		printf("\n: ");
		scanf("%d",&v);
		switch(v)
		{
			case 1:
				add_at_begin();
				break;
			case 2:
				append();
				break;
			case 3:
				add_after();
			    break;
			case 4:
				delet();
				break;
			case 5:
				count();
				break;
			case 6:
				display();
				break;
			case 7:
				reverse_p();
				break;
			case 8:
				reverse();
				break;
			case 9:
				bubble_s();
				break;
			case 10:
				selection_s();
				break;
			case 11: 
			    return(0);
			default:
				printf("Enter valid number !!");
				
		}
		
		
	}

}
