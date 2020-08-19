// Write a C program to check a given integer and return true if it is within 10 of 100 or 200.

#include<stdio.h>

void main(){
    int a, b, c, d, e;
    printf("enter an integer");
    scanf("%d", &a);
    b = 100;
    c = 200;
    d = a+b;
    e = a+c;
    if(d<0){
        d = -d;
    }
    if(e<0){
        e = -e;
    }
    if( (a - b) <= 10 || (a - c) <= 10){
        printf("true");
    };
}
