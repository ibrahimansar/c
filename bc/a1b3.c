#include <stdio.h>
#include <string.h>

//a3b3

int main()
{
    int n, i, j, count = 0;
    char a[50], ch;
    scanf("%s", a);
    for (i = 0; i < strlen(a); i++) //i = 0 | //i=1
    {
        if (a[i] >= '0' && a[i] <= '9') //a[i] = a so fails | a[i] = 3
        {
            count = (count * 10) + (a[i] - '0');  // | count = 0 + 3 - 0 = 3
        }
        else if (count > 0) //count == 0 so fails | count == 3
        {
            count--; // count == 2
            for (j = 0; j < count; j++) 
            {
                printf("%c", ch); // prints a (2nd time) and prints a (3rd time)
            }
            count = 0; //count = 0
        }
        if (a[i] > '9') //true | false
        {
            ch = a[i];  //ch = a
            printf("%c", a[i]); //prints a
        }
        if (i == (strlen(a) - 1))  //0 =! 3 so fails 1 =! 3 so fails will happen for b too
        {
            --count;
            for (j = 0; j < count; j++)
            {
                printf("%c", ch);
            }
        }
    }

    return 0;
}
