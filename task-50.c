// task-50 : Write a C program to find the largest value from first, last, and middle elements of a given array of integers of odd length (atleast 1)..

#include <stdio.h>

void main()
{
    int n, i, x, y, z;
    int a[n];
    printf("enter n value(should be odd)");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    x = a[0];
    y = a[(n / 2) + 1];
    z = a[-1];
    if (x > y)
    {
        if (x > z)
        {
            printf("first number is greatest");
        }
    }
    else if (y > x)
    {
        if (y > z)
        {
            printf("middle number is greatest");
        }
    }
    else
    {
        printf("last number is greatest");
    }
}