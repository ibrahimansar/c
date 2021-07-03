#include <stdio.h>
#include <conio.h>

int main() {
	int i,a[5];
	float np=0, nn=0, nz=0;
	int n = sizeof(a)/ sizeof(int);
	printf("enter the string");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n; i++){
		if(a[i]>0) {
			np++;			
		} else if(a[i]<0){
			nn++;
		} else {
			nz++;
		}				
	}
	printf("%0.1f, %0.1f, %0.1f", np/n, nz/n, nn/n);
}
