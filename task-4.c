// Write a C program to check a given integer and return true if it is within 10 of 100 or 200.

#include<stdio.h>

void main(){
    int a;
    printf("enter an integer");
    scanf("%d", &a);
    if( abs(a - 100) <= 10 || abs(a - 200) <= 10){
        printf("true");
    };
}
