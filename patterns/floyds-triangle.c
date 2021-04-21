#include <stdio.h>

void main()
{
    int i, j, k = 1, n;
    printf("enter n");
    scanf("%d", &n); //5
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%4d", k++);
        }
        printf("\n");
    }
}