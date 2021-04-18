// task-23 : Write a C program to check whether it is possible to add two integers to get the third integer from three given integers.

#include <stdio.h>

void main()
{
    int a, b, c;
    printf("enter two int");
    scanf("%d%d%d", &a, &b, &c);
    if (c == a + b)
    {
        printf("true");
    }
}