#include <stdio.h>

void main()
{
    int i, j, n, k;
    int num = 0;
    printf("enter the value of n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (k = 0; k <= i * 2; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i > 0; i--)
    {
        for (j = n; j >= i; j--)
        {
            printf(" ");
        }
        for (k = (i * 2) - 1; k > 0; k--)
        {
            printf("*");
        }
        printf("\n");
    }
}