#include <stdio.h>
#include <conio.h>

void main() {
	int c, n, i, j=1;
	printf("Enter the length of the array: ");
	scanf("%d", &n);
	printf("Enter the Column position to put starting number: ");
	scanf("%d", &c);
	
	for(i=0;i<n;i++){
	    if(i<c-1){
		printf("%d ", n-c+2+i);		
	   }else{
	   	printf("%d ", j++);  
	   }		
	}
}
