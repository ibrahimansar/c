// task-69 : Write a C program to create a new array taking the elements before the element value 5 from a given array of integers.

#include <stdio.h>

void main()
{
    int a[5], b[5];
    int i, j, n = 0;
    printf("Enter 5 numbers ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (a[i] != 5)
        {
            b[i] = a[i];
            n++;
        }
        else
        {
            break;
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
}