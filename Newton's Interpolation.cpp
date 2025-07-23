
//  Newton's interpolation table

#include <stdio.h>

int main() 
{
    int n, i, j;

    printf("Number of data points: ");
    scanf("%d", &n);

    int x[n], y[n][n];

    printf("Enter the data points (x y):\n");
    for (i = 0; i < n; i++) 
	{
        printf("x%d = ", i + 1);
        scanf("%d", &x[i]);
        printf("y%d = ", i + 1);
        scanf("%d", &y[i][0]);
    }
    for (i = 1; i < n; i++) 
	{
        for (j = 0; j < n - i; j++) 
		{
            y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
        }
    }
    printf("\nForward Difference Table:\n");
    for (i = 0; i < n; i++) 
	{
        printf("%d", x[i]);
        for (j = 0; j < n - i - 1; j++) 
		{
            printf("\t%d", y[i][j]);
        }
        printf("\n");
    }

    return 0;
}

