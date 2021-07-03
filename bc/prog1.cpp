#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,k,j=1;
    printf("Enter the n value");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        if(i>j)
        {
            printf("%d",j);
            for(k=abs(i-j);k>0;k--)
            printf("\t");
            printf("%d",i);
                        printf("\n");
            for(k=j;k>0;k--)
            printf("\t");
        }
        else if(j>=i)
        {
            if(i==j)
            {
            printf("%d",j);
            printf("\n");
            }
            else
            {
            printf("%d",i);
            for(k=abs(i-j);k>0;k--)
            printf("\t");
            printf("%d",j);
            printf("\n");
            }
            for(k=i-2;k>0;k--)
            printf("\t");
        }
        j++;
    }
}



