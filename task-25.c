// task-25 : Write a C program to check whether two or more non-negative given integers have the same rightmost digit.

#include <stdio.h>

void main()
{
    int a, b, c, d;
    printf("enter two int");
    scanf("%d%d", &a, &b);
    c = a % 10;
    d = b % 10;
    if (c == d)
    {
        printf("true");
    }
}