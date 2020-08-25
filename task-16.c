//Write a C program to check if a triple is presents in an array of integers or not. If a value appears three times in a row in an array it is called a triple.

#include <stdio.h>

void main(){
    int a[10], i;
    printf("enter 10 numbers \n");
    for(i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 10; i++){
        if(a[i] == a[i+1] && a[i+2] == a[i]){
            printf("%d is tripled \n", a[i]);
        }
    }
}