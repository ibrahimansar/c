#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
        FILE *fp=NULL;
        int c;
        int a[2];
        int i;
        fp=fopen("c://abc.txt","rb");

        if (fp != NULL)
        {
            while (i<=3)
            {
                        c = fgetc(fp);    
                        printf("%d",c);
                            if(c==254)
                            {
                                printf("Unicode Big Endian File");
                            }
                            else if(c==255)
                            {
                                printf("Unicode Little Endian File");
                            }
                            else if(c==239)
                            {
                                printf("UTF8  file");
                            }
                            else 
                            {
                                printf("ANSI File");
                            }

              }
              fclose(fp);

       }


        getchar();

    return 0;
}
