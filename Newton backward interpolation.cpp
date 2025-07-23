
// Newton Backword Interpolation

#include<stdio.h>
int main() 
{
    float x[20], y[20][20];
    int r, n;
    printf("Enter the number of data points: ");
    scanf("%d", &n);
    r = n;
    printf("Enter the data:\n");
    for (int i = 0; i < n; i++) 
	{
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
        printf("y[%d] = ", i);
        scanf("%f", &y[i][0]);
    }
    
    for (int i = 1; i < r; i++) 
	{
        for (int j = r - 1; j >= i; j--) 
		{
            y[j][i] = y[j][i - 1] - y[j - 1][i - 1];
        }
    }

    for (int i = 0; i < r; i++) 
	{
        printf("%.2f", x[i]);
        for (int j = 0; j <= i; j++) 
		{
            printf("\t%.2f", y[i][j]);
        }
        printf("\n");
    }
    return 0;
}

