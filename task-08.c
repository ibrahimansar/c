//Write a C program to check whether three given integer values are in the range 20..50 inclusive. Return true if 1 or more of them are in the said range otherwise return false.

#include <stdio.h>
void main()
{
    int a,b,c,l[50],k=20,i,t=0;;
    printf("Enter 3 No:\n");
    scanf("%d%d%d",&a,&b,&c);
    for(i=0;i<=32;i++)
    {
        l[i]=k;
        k=k+1;
    }
    for(i=0;i<=32;i++)
    {
        if(a==l[i]||b==l[i]||b==l[i])
        t=1;
    }
    if(t==1)
            printf("OK Within Range:\n");
    else
             printf("Not in Range\n");
       
}