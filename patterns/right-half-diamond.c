#include <stdio.h>

void main()
{
    int i, j, n, k;
    int num = 0;
    printf("enter the value of n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    for (i = n; i > 1; i--)
    {
        for (j = i; j > 1; j--)
        {
            printf(" * ");
        }
        printf("\n");
    }
}