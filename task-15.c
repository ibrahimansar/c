// Write a C program to count the number of two 5's are next to each other in an array of integers. Also count the situation where the second 5 is actually a 6.

#include <stdio.h>

void main(){
    int i,n = 0;
    int a[5];
    printf("Enter 5 values");
    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 5; i++){
        if(a[i] == 5 && (a[i+1] == 5 || a[i+1] == 6)){
            n++;
        } 
    }
    printf("%d", n);
}


//int meerasa = 5;
//Int meerasa[5] = {5,6,7,4,5};