// Write a C program to check whether two given integer values are in the range 20..50 inclusive. Return true if 1 or other is in the said range otherwise false.


#include <stdio.h>
void main()
{
int a,b;
printf("enter two value");
scanf("%d%d%d", &a, &b);
    if((a>20&&a<50)&&(b>20&&b<50)){
        printf("true");
    }       
}