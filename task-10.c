// Write a C program to check which number nearest to the value 100 among two given integers. Return 0 if the two numbers are equal.

#include<stdio.h>

void main(){
    int a ,b ,c, d;
    printf("enter two integers");
    scanf("%d %d", &a, &b);
    if((a <100) || (b<100)){
        c = 100-a;
        d = 100-b;     
        if(c>d){
            printf("%d is nearer to 100 \n", b);
        } else {
            printf("%d is nearer to 100 \n", a);
        } 
    } else {
        c = 100+a;
        d = 100+b;
        if(c>d){
            printf("%d is nearer to 100 \n", b);
        } else {
            printf("%d is nearer to 100 \n", a);
        }
    }
     if(a == b){
        printf("0");
    }
}
