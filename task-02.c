// Write a C program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference

#include <stdio.h>

void main(){
    int a ,b=51,c;
    printf("enter the value of n");
    scanf("%d", &a);
    printf("n is %d \n", a);
    c = a - b;
    printf("absolute difference is %d \n", c);
    if(a>b){
        c = c * 3;
        printf("n is greater so triple the difference is %d", c);
    }
}
