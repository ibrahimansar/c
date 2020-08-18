//Write a C program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum.

#include<stdio.h>

void main(){
    int a,b,c;
    printf("enter two values");
    scanf("%d %d", &a, &b);
    c =a+b;
    printf("%d \n", c);
    if(a == b){
        c = c * 3;
        printf("%d", c);
    }
}
