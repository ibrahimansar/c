#include<stdio.h>

int main()
{
//  findEncode("C://UTF-8_TestCase//TestCase.txt");      //-->Not Working
  findEncode("C://utf.txt");      //-->Working
}

int findEncode(char *fname){
     char str[50];
     FILE *fr;
     fr=fopen(fname,"r");
     fscanf (fr, " %s", str) ;
     fclose(fr);
     if(String_GetEncoding(str) == 0){
     	printf("UTF-8");
	 } else if(String_GetEncoding(str) == 1){
	 	printf("UTF-16BE");
	 } else if(String_GetEncoding(str) == 2){
	 	printf("UTF-16LE");
	 } else if(String_GetEncoding(str) == 3){
	 	printf("UTF-32BE");
	 } else {
	 	printf("UTF-32LE");
	 }	
}

int String_GetEncoding(char *string)
  {
    int c, i = 0, flags = 0;
    while (string[i] | string[i + 1] | string[i + 2] | string[i + 3])
      flags = (c = string[i++]) ? flags | ((!(flags % 4) &&  c > 0x7F) << 3) : flags | 1 | (!(i & 1) << 1) | ((string[i] == 0) << 2);
    return (flags & 1) + ((flags & 2) != 0) + ((flags & 4) != 0) + ((flags & 8) != 0);
  }
