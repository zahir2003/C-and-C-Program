#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1, j = n; i <= n; i++, j--)
    {
        sum = sum + i;
        printf("%d\n", j);
    }

    printf("Sum is = %d\n", sum);
    return 0;
}

