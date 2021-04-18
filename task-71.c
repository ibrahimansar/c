// task-71 : Write a C program to create a new array from a given array of integers shifting all zeros to left direction.

#include <stdio.h>

void main()
{
    int a[5];
    int i, j, temp;
    printf("Enter 5 numbers ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}