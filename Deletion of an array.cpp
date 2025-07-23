#include<stdio.h>
int main()
{
	int i,n,pos,a[10];
	printf("Enter the number of array = ");
	scanf("%d",&n);
	printf("Enter the array elements = ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Before deletion:");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	printf("\nEnter the position from where you want to delete = ");
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++)
	a[i]=a[i+1];
	printf("After deletion:");
	for(i=0;i<n-1;i++)
	printf("%d  ",a[i]);
}
