//Write a C program to compute the sum of the two given integers. If one of the given integer value is in the range 10..20 inclusive return 18.

#include<stdio.h>

void main(){
    int a,b,c;
    printf("enter two int");
    scanf("%d%d", &a,&b);
    printf("%d \n", a+b);
    if(((a>10)&&(a<20)) || ((b>10)&&(b<20))){
        printf("18");
    }
}