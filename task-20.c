// Write a C program to check whether a given non-negative number is a multiple of 3 or 7, but not both.

#include <stdio.h>

void main() {
    int a;
    printf("Enter a number");
    scanf("%d", &a);
    if(a>0){
        if((a%3 == 0 && a%7 != 0) || (a%3 != 0 && a%7 == 0) ){
            printf("it's divisible by  either 3 or 7 but not both");
        }
    }
}