#include <stdio.h>
#include <conio.h>

void main() {
	int n, i, j, temp=0, m=0;
	int a[15];
	printf("enter the size of the array: ");
	scanf("%d", &n);
	printf("enter the array elements: ");
	
	for(i = 0; i<n; i++){
	    scanf("%d", &a[i]);		
	}
	
	for(i = 0; i<n; i++){ 
			if(a[i]==0){
				temp = a[i+1]; 
				a[i+1] = a[i]; 
				a[i] = temp; 	
			}
	}
	
	
	printf("output array: ");

	for(i = m; i<n; i++){
		printf("%d ", a[i]);
	}	
}
