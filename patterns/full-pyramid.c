#include <stdio.h>

void main()
{
    int i, j, n, k;
    int num = 0;
    printf("enter the value of n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (j = 0; j < (i * 2) + 1; j++)
        {
            if (j <= i)
            {
                printf("%d", ++num);
            }
            else
            {
                printf("%d", --num);
            }
        }
        num += i;
        printf("\n");
    }
}