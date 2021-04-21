#include <stdio.h>

void main()
{
    int i, j, k, n;
    printf("enter n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= n; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}