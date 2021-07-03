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
	
	for(i = 0; i<n; i++){  //5 2
		for(j = i+1; j<n; j++){
			if(a[i]>a[j]){
				temp = a[j]; //temp = 2
				a[j] = a[i]; //2 = 5
				a[i] = temp; //5 = 2	
			}
		}
	}
	
	for(i=0; i<n; i++){
		for(j = i+1; j<n; j++){
			if(a[i] == a[j]){
				a[j] = -1;
			}
		}
	}
	
	for(i=0;i<n; i++){
		if(a[i] == -1){
			m++;
		}
	}
		
	for(i = 0; i<n; i++){  
		for(j = i+1; j<n; j++){
			if(a[i]>a[j]){
				temp = a[j]; 
				a[j] = a[i]; 
				a[i] = temp; 
			}
		}
	}
	

	
	printf("output array: ");

	for(i = m; i<n; i++){
		printf("%d ", a[i]);
	}	
}
