#include <stdio.h>
#include <conio.h>

void main() {
	int n, i, j, temp=0;
	int a[15];
	printf("enter the size of the array: ");
	scanf("%d", &n);
	printf("enter the array elements: ");
	
	for(i = 0; i<n; i++){
	    scanf("%d", &a[i]);		
	}
	
	//1 0 2 0 3
	
	for(i = 0; i<n; i++){  
		for(j = i+1; j<n; j++){
			if(a[i]==0){
				temp = a[j]; 
				a[j] = a[i]; 
				a[i] = temp; 
			}
		}
	}
		
	printf("output array: ");

	for(i = 0; i<n; i++){
		printf("%d ", a[i]);
	}	
}
