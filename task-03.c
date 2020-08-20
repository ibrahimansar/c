//Write a C program to check two given integers, and return true if one of them is 30 or if their sum is 30

#include<stdio.h>

void main(){
    int a,b,c;
    printf("enter two integer");
    scanf("%d %d", &a, &b);
    c = a+b;
    if( a==30 || b==30 || c==30){
        printf("true");
    }
}
