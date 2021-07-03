#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j, count = 0;
    char a[50], ch;
    scanf("%s", a);
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            count = (count * 10) + (a[i] - '0');
        }
        else if (count > 0)
        {
            count--;
            for (j = 0; j < count; j++)
            {
                printf("%c", ch);
            }
            count = 0;
        }
        if (a[i] > '9')
        {
            ch = a[i];
            printf("%c", a[i]);
        }
        //   printf("%d\n",i);
        if (i == (strlen(a) - 1))
        {
            --count;
            for (j = 0; j < count; j++)
            {
                printf("%c", ch);
            }
        }
    }

    return 0;
}