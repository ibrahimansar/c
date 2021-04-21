#include <stdio.h>

void main()
{
    int temp = 1;
    int i, j, n, k;
    printf("Enter n");
    scanf("%d", &n); //5
    for (i = 0; i < n; i++)
    {
        for (k = 1; k <= n - i; k++)
            printf(" ");
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                temp = 1;
            else
                temp = temp * (i - j + 1) / j;
            printf("%2d", temp);
        }
        printf("\n");
    }
}