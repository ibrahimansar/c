// Write a C program to check two given integers whether either of them is in the range 100..200 inclusive. 

#include<stdio.h>

void main(){
    int a ,b;
    printf("enter the values of two integers");
    scanf("%d %d", &a, &b);
    if((a>100 && a<200) || (b>100 && b<200)){
        printf("Any one of or both of the integers are in the range between 100 and 200");
    }
    else
    {
        printf("Both integers are not in the range between 100 andf 200");
    }
    
}
