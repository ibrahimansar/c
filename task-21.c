//Write a C program to check whether a given number is within 2 of a multiple of 10.

#include <stdio.h>

void main() {
    int a;
    printf("Enter a number");
    scanf("%d", &a);
    if(a % 10 <= 2 || a % 10 >= 8){
        printf("lothak");
    }
}