//Write a C program to check whether the value of each element is equal or greater than the value of previous element of a given array of integers.

#include<stdio.h>

void main(){
    int a[5];
    int i;
    int j=0;
    printf("Enter 5 values");
    for(i=0;i<5;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<5;i++){
        if(a[i]<=a[i+1]){
            j=1;
        }else 
        j=0;
    }
    if(j==1){
        printf("true");
    }
}