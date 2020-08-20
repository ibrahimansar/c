// Write a C program to check if two given non-negative integers have the same last digit.

#include <stdio.h>

void main(){
    int a,b,c,d;
    printf("enter two non- negative integers");
    scanf("%d %d", &a, &b);
    c = a%10;
    d = b%10;
    if(c == d){
        printf("both have same last digit");
    }
}