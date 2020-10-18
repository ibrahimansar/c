//Write a C program to check a given array (length will be atleast 2) of integers and return true if there are two values 15, 15 next to each other.

#include<stdio.h>

void main(){
    int a[5];
    int i;
    int j=0;
    printf("enter 5 values");
    for(i=0;i<5;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<5;i++){
        if((a[i]==15)&&(a[i]==a[i+1])){
            j = 1;
        }
    }
        if(j==1){
            printf("true");
        }
}