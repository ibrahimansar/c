// Write a C program to check whether two given integers are in the range 40..50 inclusive, or they are both in the range 50..60 inclusive

#include <stdio.h>

void main(){
    int a,b ;
    printf("enter two values");
    scanf("%d %d", &a, &b);
    if((a>=40 && a<=50) && (b>=40 && b<=50)) {
        printf("both are in the range between 40 and 50");
    } else if ((a>=50 && a<=60) && (b>=50 && b<=60)){
        printf("both are in the range between 50 and 60");     
    } else {
        printf("anyone of or both of the values are not in the range between 40 to 50 or 50 to 60");
    }
}