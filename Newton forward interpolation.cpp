
// Newton forward interpolation

#include<stdio.h>

int main() 
{
    float x[10], y[10][10];
    int n, i, j;

    printf("Enter the number of data points: ");
    scanf("%d", &n);

    printf("Enter x and y values:\n");
    for (i = 0; i < n; i++) 
	{
		printf("\nX%d:",i+1);
		scanf("%f",&x[i]);
		printf("\nY%d:",i+1);
		scanf("%f",&y[i][0]);
    }
    for (j = 1; j < n; j++) 
	{
        for (i = 0; i < (n - j); i++) 
		{
            y[i][j] = y[i + 1][j - 1] - y[i][j - 1];
        }
    }
    printf("\nDifference Table:\n");
    for (i = 0; i < n; i++) 
	{
        printf("\t%.2f", x[i]);
        for (j = 0; j < (n - i); j++) 
		{
            printf("\t%.2f", y[i][j]);
        }
        printf("\n");
    }
    float a, sum = y[0][0], h = x[1] - x[0], u;
    printf("Enter the point for interpolation: ");
    scanf("%f", &a);

    u = (a - x[0]) / h;
    int p = 1;

    for (j = 1; j < n; j++) 
	{
        p = p * (u - j + 1) / j;
        sum = sum + (p * y[0][j]);
    }

    printf("\nInterpolated value at x = %.2f is %.2f\n", a, sum);

    return 0;
}

