//Write a C program to to test whether a given non-negative number is a multiple of 13 or it is one more than a multiple of 13.

#include <stdio.h>

void main() {
    int a;
    printf("Enter a number");
    scanf("%d", &a);
    if(a > 0 && (a%13 == 0 || a%13 == 1)){
        printf("true");
    }
}