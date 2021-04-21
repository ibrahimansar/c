#include <stdio.h>

void main()
{
    int n, m, i, j;
    printf("enter rows and colm");
    scanf("%d%d", &n, &m);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (i == 1 || i == n || j == 1 || j == m)
            {
                printf("+ ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}