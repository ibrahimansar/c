#include <stdio.h>

void main()
{
    int i, j, k, n;
    printf("enter n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (k = 1; k < n - i; k++)
        {
            printf(" ");
        }
        for (j = 0; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}