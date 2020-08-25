// Write a C program to compute the sum of the two given integers. If the sum is in the range 10..20 inclusive return 30.
// if a+b >10 <20 then it will return 30 otherwise it will return a+b;

#include <stdio.h>

void main(){
    int a ,b ,c;
    printf("enter two values");
    scanf("%d %d", &a, &b);
    c = a+b > 10 && a+b < 20 ? 30 : a+b;
    printf("%d", c);
}