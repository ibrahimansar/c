//task-24 : Write a C program to check whether y is greater than x, and z is greater than y from three given integers x,y,z.

#include <stdio.h>

void main()
{
    int x, y, z;
    printf("enter x, y, z");
    scanf("%d%d%d", &x, &y, &z);
    if ((y > x) && (z > y))
    {
        printf("true");
    }
}