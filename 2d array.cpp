#include<stdio.h>
int main()
{
	int i,j,row,column,a[100][100],b[100][100],c[100][100];
	printf("Enter the number of rows = ");
	scanf("%d",&row);
	printf("Enter the number of columns = ");
	scanf("%d",&column);
	printf("Enter the first array element = ");
	for(i=0;i<row;i++)
	for(j=0;j<column;j++)
	scanf("%d",&a[i][j]);
	printf("Enter the second array elements = ");
	for(i=0;i<row;i++)
	for(j=0;j<column;j++)
	scanf("%d",&b[i][j]);
	printf("Sum of two array:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
