// task-70 : Write a C program to create a new array taking the elements after the element value 5 from a given array of integers.

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
        if (a[i] == 5)
        {
            for (j = i + 1; j < 5; j++)
            {
                b[j] = a[j];
                n++;
            }
        }
    }

    for (i = n - 1; i < 5; i++)
    {
        printf("%d ", b[i]);
    }
}