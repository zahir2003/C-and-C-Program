#include<stdio.h>
int main()
{
	int i,n,pos,value,a[10];
	printf("Enter the number of array = ");
	scanf("%d",&n);
	printf("Enter the array elements = ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Array before inserting:");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\nEnter the position from where you want to insert = ");
	scanf("%d",&pos);
	for(i=n;i>=pos;i--)
	a[i]=a[i-1];
	printf("Enter an integer no = ");
	scanf("%d",&value);
	a[pos-1]=value;
	printf("Array after inserting:");
	for(i=0;i<n+1;i++)
	printf("%d  ",a[i]);
	return 0;	
}
