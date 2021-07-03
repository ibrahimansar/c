#include<stdio.h>
#include<conio.h>
#include <string.h>
#include <stdlib.h>

void writeFile(char *fname)
{
     FILE *fp;
     char str[50] = "___";
      fp = fopen(fname, "w");
      if (fp == NULL)
      {
        perror("File could not be opened for writing\n");
      }
      else
      {
        printf("File created\n");
      }
      fprintf (fp, " %s ", str) ;
      fclose(fp);
}

void readFile(char *fname)
{
     char str[50];
     printf("Reading from the file \n");

     FILE *fr;
     fr=fopen(fname,"r");
     fscanf (fr, " %s", str) ;
     fclose(fr);
     printf("the data from the file %s \n", str);
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

int main()
{
	
  writeFile("c://abc.txt");
  readFile("c://abc.txt");
  findEncode("c://abc.txt");
}
