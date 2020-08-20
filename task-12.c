// Write a C program to find the larger value from two positive integer values that is in the range 20..30 inclusive, or return 0 if neither is in that range.

#include <stdio.h>
 
int main(){
    int a,b;
    printf("enter two integer");
    scanf("%d %d", &a, &b);
    if((a>20 && a<30) && (b>20 && b<30)){
        if(a>b){
            printf("a is bigger");
        } else {
            printf("b is bigger");
        }
    } else {
        return 0;
    }
}