/* Example using strtol by TechOnTheNet.com */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <limits.h>

int main(int argc, const char * argv[])
{
    /* Define temporary variables */
    char value[10];
    char *eptr;
    long result;

    /* Copy a value into the variable */
    /* It's okay to have whitespace before the number */
    strcpy(value, "12");

    /* Convert the provided value to a decimal long */
    result = strtol(value, &eptr, 10);

    /* If the result is 0, test for an error */
    if (result == 0)
    {
        /* If a conversion error occurred, display a message and exit */
        if (errno == EINVAL)
        {
            printf("Conversion error occurred: %d\n", errno);
            exit(0);
        }
    }

    /* If the result is equal to LONG_MIN or LONG_MAX, test for a range error */
    if (result == LONG_MIN || result == LONG_MAX)
    {
        /* If the value provided was out of range, display a warning message */
        if (errno == ERANGE)
            printf("The value provided was out of range\n");
    }

    /* Display the converted result */
    printf("%ld decimal\n", result);

    /* Copy a hexadecimal value into the variable */
    strcpy(value, "0x19e");

    /* Convert the provided value to a decimal long */
    result = strtol(value, &eptr, 16);

    /* If the result is 0, test for an error */
    if (result == 0)
    {
        /* If a conversion error occurred, display a message and exit */
        if (errno == EINVAL)
        {
            printf("Conversion error occurred: %d\n", errno);
            exit(0);
        }
    }

    /* If the result is equal to LONG_MIN or LONG_MAX, test for a range error */
    if (result == LONG_MIN || result == LONG_MAX)
    {
        /* If the value provided was out of range, display a warning message */
        if (errno == ERANGE)
            printf("The value provided was out of range\n");
    }

    /* Display the converted result */
    printf("%lx hexadecimal\n", result);

    return 0;
}
