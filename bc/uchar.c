#include<stdio.h>
String_GetEncoding(char *);
void main(){
	char str[10];
	printf("Enter a string");
	scanf("%s", str);
	printf("%d ", String_GetEncoding(str));
	
}

int String_GetEncoding(char *string)
  {
    int c, i = 0, flags = 0;
    while (string[i] | string[i + 1] | string[i + 2] | string[i + 3])
      flags = (c = string[i++]) ? flags | ((!(flags % 4) &&  c > 0x7F) << 3) : flags | 1 | (!(i & 1) << 1) | ((string[i] == 0) << 2);
    return (flags & 1) + ((flags & 2) != 0) + ((flags & 4) != 0) + ((flags & 8) != 0);
  }
  
  
//  0  = UTF-8
//1  = UTF-16BE
//2  = UTF-16LE
//3  = UTF-32BE
///4  = UTF-32LE 
