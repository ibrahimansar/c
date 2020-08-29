#include<studio.h>
int main()
{
int n,i,j,a,b,c;
n=4;
c=1;
for(i=1;i<=n;i++)
{ 
a=c+i-1;
b=c-1;
c=a+1;
for(j=a;j>=b+1;j--)
{ printf("%d",j)}
printf("\n");
}
return 0;
}