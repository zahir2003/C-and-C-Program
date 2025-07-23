#include<stdio.h>
int main()
{
	char day;
	printf("Enter day = ");
	scanf("%c \n",&day);
	switch(day)
	{
		case 1:printf("Tuesday \n");
		break;
		case 2:printf("Saturday \n");
		break;
		default :printf("Please enter a valid choice");
	}
	return 0;
}
