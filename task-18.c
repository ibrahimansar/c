//Write a C program that accept two integers and return true if either one is 5 or their sum or difference is 5.

#include <stdio.h>

void main() {
    int a,b,c,d;
    printf("Enter two number");
    scanf("%d %d", &a, &b);
    c = a+b;
    d = a-b;
    if(a == 5 || b == 5 || c == 5 || d == 5){
        printf("true");
    }
}