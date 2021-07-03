#include <stdio.h>

int main(){
char hex[] = "A61";                          // here is the hex string
int num = (int)strtol(hex, NULL, 16);       // number base 16
printf("%c\n", num);                        // print it as a char
printf("%d\n", num);                        // print it as decimal
printf("%X\n", num);
	}
