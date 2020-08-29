#include<stdio.h>

int main(){
    int n,i,j,a,b,c;
    n=4;
    c=1;
    for(i = 1; i <= n; i++){  //fl 1
        a=c+i-1;
        b=c-1;
        c=a+1;
        for(j = a; j >= b+1; j--){  // fl 2
             printf("%d ",j);
             }
        printf("\n");
    }
    return 0;
}


//explanation

/*
step 1:
        in fl 1  (i=1)                 
            a = 1+1-1 = 1;
            b = 1-1 = 0;
            c = 1+1 = 2;
            in fl 2
                (j = 1)

step 2:
        in fl 1  (i=2)
            a = 2+2-1 = 3;
            b = 2-1 = 1;
            c = 3+1 = 4;
            in fl 2
                (j = 3 2)

step 3:
        in fl 1  (i=3)
            a = 4+3-1 = 6;
            b = 4-1 = 3;
            c = 6+1 = 7;
            in fl 2
                (j = 6 5 4)

step 4:
        in fl 1  (i=4)
            a = 7+4-1 = 10;
            b = 7-1 = 6;
            c = 10+1 = 11;
            in fl 2
                (j = 10 9 8 7)              


output:
        1
        3 2
        6 5 4
        10 9 8 7                                  

*/
