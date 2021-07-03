#include<stdio.h>
#include<conio.h>


void main(){
	FILE *fp;
	char str[50];
	fp = fopen("data.txt", "w");
	if(fp==NULL)
		printf("Does not exist");
	else
		printf("File created");
	fclose(fp);
}
