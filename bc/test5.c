#include <stdio.h>
#include <conio.h>

void main() {
	int n, i, k, j, temp=0;
	int a[15];
	printf("enter the size of the array: ");
	scanf("%d", &n);
	printf("enter the array elements: ");
	
	for(i = 0; i<n; i++){
	    scanf("%d", &a[i]);		
	}
	
	printf("output array is: ");
	for(i = 0; i<n; i = i+2){ // 2 1 , 3 4 
		if(a[i]> a[i+1]){
			temp = a[i+1];
			a[i+1] = a[i];
			a[i] = temp;
//			printf("%d %d ", a[i], a[i+1]);
		} else {
//			printf("%d %d ", a[i], a[i+1]);
		}
	}
	
	for(i = 0; i<n; i++){
		printf("%d ", a[i]);
	}		
}
