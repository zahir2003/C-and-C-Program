#include<stdio.h>
int main()
{
    int i,n,sr,f;
    printf("Enter the array size = ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements = ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter search element = ");
	scanf("%d",&sr);
	for(i=0;i<n;i++)
	{
	if(a[i]==sr)
	{
		f=1;
		break;
	}
	}
	if(f==1)
	{
		printf("%d element found in index %d",sr,i);
	}
	else
	printf("Element not found!!");
	return 0;
}
