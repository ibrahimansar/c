// Write a C program to check whether a given temperatures is less than 0 and the other is greater than 100.

#include<stdio.h>

void main(){
    int a,b;
    printf("Enter a temperature");
    scanf("%d", &a);
    printf("Enter a temperature");
    scanf("%d", &b);
    if(a<0){
        printf("first temperature is lesser than 0 \n");
    } else {
        printf("first temperature is not lesser than 0 \n");
    }
    if(b>100){
        printf("secound temperature is greater than 100 \n");
    } else {
        printf("secound temperature is not greater than 0 \n");
    }
}
