//Write a C program to check whether three given integer values are in the range 20..50 inclusive. Return true if 1 or more of them are in the said range otherwise return false.

#include <stdio.h>
void main()
{
int a,b,c;
printf("enter three value");
scanf("%d%d%d", &a, &b, &c);
    if((a>20&&a<50)&&(b>20&&b<50)&&(c>20&&c<50)){
        printf("true");
    }       
}